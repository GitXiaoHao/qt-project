#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QUrl>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle(QString::fromLocal8Bit("竟成电子百度地图上位机"));

    page = ui->graphicsView->page();
    m_webchannel = new QWebChannel () ;

    m_webchannel->registerObject("widget", this);
    page->setWebChannel(m_webchannel);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_loadMap_clicked()
{


    QString curPath,aFileName;
    curPath = QCoreApplication::applicationDirPath(); //获取应用程序的路径

   //调用打开文件对话框打开一个文件
   aFileName = QFileDialog::getOpenFileName(this,("Open Html"),curPath,"html(*.html)");

   if (!aFileName.isEmpty())
   {
       page->load(QUrl(aFileName));
   }


}


void Widget::on_setPosition_clicked()
{
    QString Lng = ui->lineEditlng->text();//获取经度
    QString Lat = ui->lineEditlat->text();//获取纬度
    //QWebEnginePage *page = ui->graphicsView->page();
    QString command = QString("theLocationZCF(%1,%2)").arg(Lng).arg(Lat);
    qDebug() << command;
    page->runJavaScript(command);
}

void Widget::map_clicked(QString longtitude, QString latitude)
{
    ui->lineEdit_Reallng->setText(longtitude);
    ui->lineEditReallat->setText(latitude);
}


//路径规划
void Widget::on_pushButtonPathPlanning_clicked()
{
    QString Startlng = ui->lineEditStartlng->text();
    QString Startlat = ui->lineEditStartlat->text();

    QString Stoplng = ui->lineEditStoplng->text();
    QString Stoplat = ui->lineEditStoplat->text();

    QString command = QString("pathPlanning(%1,%2,%3,%4)").arg(Startlng).arg(Startlat).arg(Stoplng).arg(Stoplat);
    qDebug() << command;
    page->runJavaScript(command);
}
