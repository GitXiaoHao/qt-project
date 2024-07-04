#ifndef WIDGET_H
#define WIDGET_H

#include <QCamera>
#include <QCameraImageCapture>
#include <QCameraViewfinder>
#include <QWidget>

#include <QCameraInfo>
#include <QMessageBox>
#include <QNetworkAccessManager>


#include <QDebug>

#include <QNetworkRequest>//请求
#include <QNetworkReply>//回复
#include <QUrlQuery>

#include <QCryptographicHash>
#include <QDateTime>

#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    //实时时间
    void SltUpdateTime();


    //截图


    void on_beginBtn_clicked();

    //识别
    void read_reply(QNetworkReply * reply);

    void on_openPir_clicked();

private:
    Ui::Widget *ui;

    //实时时间
    QTimer *timer_;
private:



    QNetworkAccessManager* client;
    QString apiUrl = "https://aip.baidubce.com/rest/2.0/ocr/v1/license_plate";
    QString appId = "32714526";
    QString apiKey = "pZkwfkgnDUAa5Ag69LoSN1oe";
    QString secretKey = "4PKHvy7ZKSTF3mYPcj8CvXyXZ7v03QE0";
    QString imgPath;

    //老师的
    QString access_token =  "24.8047cd06fc20922843fe2db7efddcadb.2592000.1720340848.282335-79609887";

    //我的
    //QString access_token = "24.06ca26e29d450a04a12154771294fbf1.2592000.1684747860.282335-32714526";


};
#endif // WIDGET_H
