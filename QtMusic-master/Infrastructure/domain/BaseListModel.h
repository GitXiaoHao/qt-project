/**********************************************************
Author: 微信公众号(你才小学生)
WeChat public platform: nicaixiaoxuesheng
Email:  2088201923@qq.com
**********************************************************/
#ifndef CPP_BASE_LIST_MODEL_H
#define CPP_BASE_LIST_MODEL_H

#include <QAbstractListModel>

class BaseListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum Roles {
        ModelDataRole = Qt::UserRole + 1
    };

    BaseListModel(QObject* parent = nullptr);

    Q_INVOKABLE virtual QVariant at(int index) = 0;
    Q_INVOKABLE virtual QVariant last() = 0;
    Q_INVOKABLE virtual int size() = 0;

private:
    QHash<int,QByteArray> roleNames() const;

signals:
    void listChanged();
};

#endif // BASELISTMODEL_H
