#include "MusicRepertory.h"
#include "JsonListConvertor.h"

#include <QJsonDocument>
#include <QFile>

MusicRepertory * MusicRepertory::_instance = nullptr;

MusicRepertory *MusicRepertory::instance()
{
    if (_instance == nullptr) {
        _instance = new MusicRepertory();
    }
    return _instance;
}

QList<MusicBase *> MusicRepertory::getList()
{
    return m_musicBaseList;
}

MusicBase *MusicRepertory::get(QString id)
{
    for (int i = 0; i < m_musicBaseList.count(); i++) {
        if (m_musicBaseList.at(i)->getId() == id) {
            return m_musicBaseList.at(i);
        }
    }

    return nullptr;
}

void MusicRepertory::add(MusicBase *musicBase)
{
    if (musicBase == nullptr)
        return;

    musicBase->setId(generateRandomId());
    m_musicBaseList.append(musicBase);
    qDebug()<<musicBase->getPathName();
    m_mediaPlayList->addMedia(QMediaContent(QUrl::fromLocalFile(musicBase->getPathName())));
    this->save();
}

void MusicRepertory::remove(const QString &id)
{
    for (int i = 0; i < m_musicBaseList.count(); i++)
    {
        if (m_musicBaseList.at(i)->getId() == id)
        {
            m_musicBaseList.removeAt(i);
            break;
        }
    }

    this->save();
}

void MusicRepertory::update(MusicBase *musicBase)
{
    if (musicBase == nullptr)
    {
        return;
    }

    for (int i = 0; i < m_musicBaseList.count(); ++i)
    {
        MusicBase * oldMusicBase = m_musicBaseList.at(i);
        if (oldMusicBase->getId() == musicBase->getId())
        {
            delete oldMusicBase;

            m_musicBaseList.replace(i, musicBase);
            break;
        }
    }

    this->save();
}

QMediaPlaylist *MusicRepertory::getMediaPlayList()
{
    return m_mediaPlayList;
}

MusicRepertory::MusicRepertory()
{
    reload();

    m_mediaPlayList = new QMediaPlaylist();
    for (int i = 0; i < m_musicBaseList.count(); i++) {
        MusicBase* musicBase = m_musicBaseList.at(i);
        m_mediaPlayList->addMedia(QMediaContent(QUrl::fromLocalFile(musicBase->getPathName())));
    }
}

void MusicRepertory::save()
{
    JsonListConvertor<MusicBase> convertor;
    QJsonValue jsonValue = convertor.toJson(m_musicBaseList);

    QFile saveFile("save.json");
    saveFile.open(QIODevice::WriteOnly);

    QJsonObject jsonObj;
    jsonObj.insert("musicInfoArray", jsonValue.toArray());

    QJsonDocument saveDoc(jsonObj);
    saveFile.write(saveDoc.toJson());
    saveFile.close();
}

void MusicRepertory::reload()
{
    QFile saveFile("save.json");
    saveFile.open(QIODevice::ReadOnly);

    QByteArray saveData = saveFile.readAll();

    QJsonDocument saveDoc(QJsonDocument::fromJson(saveData));

    QJsonArray jsonList = saveDoc.object().value("musicInfoArray").toArray();
    JsonListConvertor<MusicBase> convertor;
    m_musicBaseList = convertor.toList(jsonList);
    saveFile.close();
}

QString MusicRepertory::generateRandomId()
{
    int randId = rand();
    for (int i = 0; i < m_musicBaseList.count(); i++)
    {
        MusicBase* model = m_musicBaseList.at(i);
        if (model->getId().toInt() == randId)
            return generateRandomId();
    }
    return QString::number(randId);
}
