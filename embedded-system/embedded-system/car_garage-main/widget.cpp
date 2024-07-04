#include "widget.h"
#include "ui_widget.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //实时时间
    timer_ = new QTimer(this);
    timer_->start(1000);
    connect(timer_,&QTimer::timeout,this,&Widget::SltUpdateTime);
    //识别
    //实例化
    client = new QNetworkAccessManager(this);
    //等待百度服务器给我们响应,去读取响应到的数据
    connect(client,
            &QNetworkAccessManager::finished,
            this,
            &Widget::read_reply);
}

Widget::~Widget()
{
    delete ui;
}




//开始识别
void Widget::on_beginBtn_clicked()
{
    qDebug()<<"识别ing...";

    QString url =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/license_plate?access_token="+access_token;
    //图像文件的准备
    //请求准备
    QUrlQuery parame;
    //1.挖出照片内容
      QFile file(imgPath);
      file.open(QIODevice::ReadOnly);
      QByteArray buf = file.readAll();

    QNetworkRequest request(QUrl(url).toString());
    QByteArray buf64 = buf.toBase64().toPercentEncoding();
        QByteArray body = "image="+buf64;
    //给请求设置头部信息
    //如使用 POST 方式，Content-Type 请指定为：application/x-www-form-urlencoded
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    client->post(request, body);

}

//读取应答包
void Widget::read_reply(QNetworkReply *reply)
{
    //读取应答
    //QString content = reply->readAll();
    //qDebug()<<"connect:"<<content;
    //qDebug()<<"============================";


    QJsonObject json =  QJsonDocument::fromJson(reply->readAll()).object();

    if(json.contains("words_result"))
    {
       //json.value("words_result")与json["words_result"]等价
       QJsonObject data = json["words_result"].toObject();//读取key是trans_result的QJsonArray数组

       QString ans1 = data["color"].toString();//车牌颜色
       QString ans2 = data["number"].toString();//车牌号码
       qDebug()<<ans1;
       qDebug()<<ans2;

       ui->textEdit->append("车牌颜色:"+ans1);
       ui->textEdit->append("车牌号码:"+ans2);

    }else if(json.contains("error_code")){
        QMessageBox::information(this,"提示","翻译失败!");
        qDebug()<<"出错了";
    }else{
        qDebug()<<"未知错误";
    }
}

void Widget::SltUpdateTime(){

    QDateTime now = QDateTime::currentDateTime();
    QString time_str = now.toString("yyyy-MM-dd hh:mm:ss");

    ui->lcd->display(time_str);
}


void Widget::on_openPir_clicked()
{
    QString filename =  QFileDialog::getOpenFileName(this, "打开车牌照片", ".", "Images (*.jpg)");
    if(filename == ""){
        QMessageBox::warning(this,tr("警告"),tr("您未选择图片"));
    }else{
        imgPath = filename;
        QPixmap *pixmap = new QPixmap(filename);
         pixmap->scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label->setScaledContents(true);
        ui->label->setPixmap(*pixmap);
    }
}

