#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFileDialog>
#include <QNetworkRequest>
#include <QFile>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMovie>
#include <QtTextToSpeech/QTextToSpeech>
Widget::~Widget()
{

}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // 构建
    building_controls();
    // 排版
    layout();
    // 设置事件
    set_events();
    // 美化
    beautify_the_interface();
}


//将二维码路径和图片显示出来
void Widget::load_pix()
{
    result_edit->setText("");
    QString filename =  QFileDialog::getOpenFileName(this, "打开车牌照片", ".", "Images (*.jpg)");
    if(filename == ""){
        QMessageBox::warning(this,tr("警告"),tr("您未选择图片"));
         clear();
    }else{
        path_edit = filename;
        QPixmap *pixmap = new QPixmap(filename);
         pixmap->scaled(photo_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        photo_label->setScaledContents(true);
        //photo_label->setPixmap(QPixmap(filename));
        photo_label->setPixmap(*pixmap);
    }
}

void Widget::decode_pix()
{
    if(path_edit == ""){
        QMessageBox::warning(this,tr("警告"),tr("您未选择图片"));
        clear();
        return ;
    }
    //向百度发送一个二维码识别请求（HTTP）
    QNetworkRequest myrequset;// = new QNetworkRequest;
    //填充请求url
    myrequset.setUrl(QUrl("https://aip.baidubce.com/rest/2.0/ocr/v1/license_plate?"
                      "access_token=24.71fe881c6ac0c00b60e18743e6820d58.2592000.1721637885.282335-71642895"));
    //填充header
    myrequset.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    //填充请求的body
    //1.挖出照片内容
    QFile file(path_edit);
    file.open(QIODevice::ReadOnly);
    QByteArray buf = file.readAll();
    //2.转成base64及urlcode
    QByteArray buf64 = buf.toBase64().toPercentEncoding();
    QByteArray body = "image="+buf64;
    //发送完整的一次识别请求
    httpmanager->post(myrequset, body);
}

//结果解析
void Widget::read_ack(QNetworkReply* r)
{
    //提取json格式的返回
    QByteArray buf = r->readAll();
    qDebug() << buf;

    //提取json中的感兴趣的内容
    QJsonDocument myjson = QJsonDocument::fromJson(buf);
    QJsonObject node = myjson.object();
    QJsonObject arr = node.value("words_result").toObject();
    QString text = arr.value("number").toString();
    if(text == ""){
        QMessageBox::critical(this,"错误信息","未识别出结果");
        clear();
        return;
    }
    result_edit->setText(text);
}

/**
 * @brief Widget::building_controls
 * 构建控件
 */
void Widget::building_controls(){
    //1. 构造所有需要的控件
    photo_label = new QLabel;
    photo_label->setFixedSize(470,400);
    photo_label->setScaledContents(true);
    photo_label->installEventFilter(this);    // 安装事件过滤器
    photo_label->setAlignment(Qt::AlignCenter);// 设置对齐方式为居中对齐
    load_button = new QPushButton("载入车牌");
    load_button->setFixedSize(100, 48);
    recognition_button = new QPushButton("识别");
    recognition_button->setFixedSize(100, 48);

    result_edit = new QLineEdit;
    result_edit->setPlaceholderText("识别结果");
    result_edit->setReadOnly(true); //只读
    result_edit->setMinimumHeight(50);
    result_edit->setStyleSheet("QLineEdit{font: 30px;};");
}
/**
 * @brief Widget::layout
 * 排版
 */
void Widget::layout(){
    //2. 排版
    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addWidget(load_button);
    hbox->addWidget(recognition_button);
    QVBoxLayout *mainbox = new QVBoxLayout;
    mainbox->addLayout(hbox);
    mainbox->addWidget(photo_label);
    mainbox->addWidget(result_edit);

    setLayout(mainbox);
}
void Widget::set_events(){
    //3. 前后台挂接
    httpmanager = new QNetworkAccessManager;
    connect(httpmanager, SIGNAL(finished(QNetworkReply*)), this, SLOT(read_ack(QNetworkReply*)));
    connect(load_button, SIGNAL(clicked(bool)), this, SLOT(load_pix()));
    connect(recognition_button, SIGNAL(clicked(bool)), this, SLOT(decode_pix()));
}
void Widget::beautify_the_interface(){
    //4. 美化
    result_edit->setStyleSheet("color:#3498db;font-weight:700;font-size:35px;border-radius: 3px;");
    photo_label->setStyleSheet("background-color:#81ecec;font: 25px;margin: 20px;border-radius: 10px;");
    load_button->setStyleSheet("QPushButton{"
                             "background-color:#55e6c1;"
                             "border-radius: 10px;"
                             "font: 25px;}"
                             );
    load_button->setCursor(QCursor(Qt::PointingHandCursor));
    recognition_button->setStyleSheet("QPushButton{"
                             "background-color:#55e6c1;"
                             "border-radius: 10px;"
                             "font: 25px;}"
                             );
    recognition_button->setCursor(QCursor(Qt::PointingHandCursor));
}

bool Widget::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == photo_label)//指定某个QLabel
     {
         if (event->type() == QEvent::MouseButtonPress) //鼠标点击
         {
             QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event); // 事件转换

             if(mouseEvent->button() == Qt::LeftButton)
             {
                 load_pix();
                 return true;
             }
                 return false;
         }
     }
     else
     {
         // pass the event on to the parent class
         return QWidget::eventFilter(obj, event);
     }
     return false;
}
void Widget::clear(){
    photo_label->setPixmap(QPixmap(""));
    photo_label->setText("点击载入车牌");
    result_edit->setText("");
    path_edit = "";
}
