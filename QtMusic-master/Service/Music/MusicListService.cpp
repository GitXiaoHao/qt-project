#include "MusicListService.h"
#include <QFile>
#include <QDir>
#include <QDebug>

const QString musicFilter[] = {
    "*.mp3"
};

const QString lyricFilter[] = {
    "*.lrc"
};

MusicListService * MusicListService::_instance = NULL;

MusicListService *MusicListService::instance()
{
    if (_instance == NULL) {
        _instance = new MusicListService();
    }
    return _instance;
}

MusicListService::~MusicListService()
{
}

MusicListService::MusicListService()
{
    m_musicDir.setNameFilters(this->getMusicTypeFilter());
    m_musicDir.setSorting(QDir::Name);
}

QStringList MusicListService::getMusicTypeFilter()
{
    QStringList filterList;
    for (int i = 0; i < sizeof(musicFilter)/sizeof(musicFilter[0]); i++)
        filterList.append(musicFilter[i]);

    return filterList;
}

QStringList MusicListService::getlyrcTypeFilter()
{
    QStringList filterList;
    for (int i = 0; i < sizeof(lyricFilter)/sizeof(lyricFilter[0]); i++)
        filterList.append(lyricFilter[i]);

    return filterList;
}

QList<MusicBase *> MusicListService::getList()
{
    return MusicRepertory::instance()->getList();
}

MusicBase *MusicListService::get(QString id)
{
    return MusicRepertory::instance()->get(id);
}

MusicBase *MusicListService::get(int index)
{
    if (index >= 0 && index < getList().count())
        return this->getList().at(index);
    else
        return NULL;
}

void MusicListService::add(MusicBase *musicBase)
{
    MusicRepertory::instance()->add(musicBase);
    emit listChanged();
}

void MusicListService::remove(QString id)
{
    MusicRepertory::instance()->remove(id);
    emit listChanged();
}

void MusicListService::update(MusicBase *musicBase)
{
    MusicRepertory::instance()->update(musicBase);
    emit listChanged();
}

bool MusicListService::isExistMusic(QString pathName)
{
    QList<MusicBase *> musicList = MusicRepertory::instance()->getList();
    for (int i = 0; i < musicList.count(); i++) {
        if (musicList.at(i)->getPathName() == pathName)
            return true;
    }

    return false;
}

QMediaPlaylist *MusicListService::getMediaPlayList()
{
    return MusicRepertory::instance()->getMediaPlayList();
}

void MusicListService::setCurrentPlayMusicId(QString musicId)
{
    QList<MusicBase *> musicBaseList = this->getList();
    for (int i = 0; i < musicBaseList.count(); i++) {
        if (musicBaseList.at(i)->getId() == musicId) {
            this->getMediaPlayList()->setCurrentIndex(i);
            break;
        }
    }
}

QString MusicListService::getLyricFilPath()
{
    int index = this->getMediaPlayList()->currentIndex();
    MusicBase* musicBase = this->get(index);

    if (musicBase == NULL) return "";

    QFileInfo infoBase(musicBase->getPathName());

    QDir dir(infoBase.absoluteDir().path());
    dir.setNameFilters(getlyrcTypeFilter());
    dir.setSorting(QDir::Name);

    for (int i = 0; i < dir.entryList().count(); i++) {
        QFileInfo info(dir.entryList().at(i));
        QRegExp reg(info.baseName()+"+");

        int index = reg.indexIn(musicBase->getMusicName());
        if (index != -1) {
            return infoBase.absoluteDir().path()+"/"+dir.entryList().at(i);
        }
    }

    return "";
}

void MusicListService::add(QStringList pathList)
{    
    for (int i = 0; i < pathList.count(); i++) {
        m_musicDir.setPath(pathList.at(i));

        for (int j = 0; j < m_musicDir.entryList().count(); j++) {
            m_fileInfo.setFile(m_musicDir.path(), m_musicDir.entryList().at(j));

            if (isExistMusic(m_fileInfo.filePath()) == false) {
                MusicBase* musicBase = new MusicBase();
                musicBase->setName(m_fileInfo.fileName());
                musicBase->setMusicName(m_fileInfo.baseName());
                /*filePath() Returns the name of the file, excluding the path*/
                musicBase->setPathName(m_fileInfo.filePath());
                this->add(musicBase);
            }
        }
    }
}

