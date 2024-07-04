#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QNetworkAccessManager>
#include<QtTextToSpeech/QTextToSpeech>
#include <QMouseEvent>
#include <QMessageBox>
class Widget : public QWidget
{
    Q_OBJECT

public slots:
    void read_ack(QNetworkReply*);
    void load_pix();
    void decode_pix();

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    void clear();
    bool eventFilter(QObject *obj, QEvent *event);	// 添加时间过滤器声明
    void building_controls();
    void layout();
    void set_events();
    void beautify_the_interface();
    QLabel *photo_label;
    QString path_edit;
    QLineEdit *result_edit;
    QPushButton *load_button;
    QPushButton *recognition_button;
    QNetworkAccessManager *httpmanager;
};

#endif // WIDGET_H
