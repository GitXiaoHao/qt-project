#include "MusicLyricsListModel.h"
#include "MusicListService.h"
#include "MusicPlayControl.h"
#include <QFile>
#include <QRegExp>

MusicLyricsListModel::MusicLyricsListModel()
{
    this->reload();
    connect(MusicPlayControl::instance(), SIGNAL(positionChanged(qint64)), this, SLOT(currentIndexChangedSlot(qint64)));
    connect(MusicListService::instance()->getMediaPlayList(), SIGNAL(currentIndexChanged(int)), this, SLOT(reload()));
}

MusicLyricsListModel::~MusicLyricsListModel()
{

}

int MusicLyricsListModel::getCurrentIndex()
{
    return m_currentIndex;
}

void MusicLyricsListModel::setCurrentIndex(int index)
{
    m_currentIndex = index;
    emit statusChanged();
}

void MusicLyricsListModel::reload()
{
    QList<MusicLyricsModel *> musicLyricsListModel = QList<MusicLyricsModel *>();

    QFile file(MusicListService::instance()->getLyricFilPath());
    if (file.exists() == true) {

        file.open(QIODevice::ReadOnly);

        MusicLyricsModel* preModel = nullptr;
        QTime preTime = QTime(0, 0, 0, 0);

        while (!file.atEnd()) {
            QString lineStr = file.readLine().data();

            QRegExp reg("[\[]([0-9]+)[\:]([0-9]+)[\.]([0-9]+)[\]]");
            reg.indexIn(lineStr);

            MusicLyricsModel* model = new MusicLyricsModel(this);
            QTime curTime = QTime(0,
                                  reg.cap(1).toInt(),
                                  reg.cap(2).toInt(),
                                  reg.cap(3).length() == 1 ? 100*reg.cap(3).toInt() :
                                  reg.cap(3).length() == 2 ? 10*reg.cap(3).toInt()  :
                                  reg.cap(3).length() == 3 ? 1*reg.cap(3).toInt()  : 0
                                  );
            model->setTime(curTime);
            model->setContent(lineStr.remove(reg));

            musicLyricsListModel.append(model);

            if (preModel != nullptr) {
                int elapsed = preTime.msecsTo(curTime);
                //qDebug() << "elapsed is:" << elapsed;
                preModel->setDuration(elapsed);
            }

            preModel = model;
            preTime = curTime;
        }

        file.close();
    }

    notifyResetList(musicLyricsListModel);
}

void MusicLyricsListModel::currentIndexChangedSlot(qint64 position)
{
    for (int i = 0; i < this->size(); i++) {
        if (this->getItemList().at(i)->getTime().msecsSinceStartOfDay() >= position) {
            this->setCurrentIndex(i-1);
            break;
        }
    }
}
