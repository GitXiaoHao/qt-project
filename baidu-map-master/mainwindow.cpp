#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mapView = new QWebEngineView(this);
    mapView->setGeometry(50,70,700,500);

    page = mapView->page();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushBtn_load_clicked()
{
//    exePath = dir.currentPath();
//    mapPath = exePath + "/bdmap.html";
//    page->load(QUrl(mapPath));
    //需根据html文件位置修改路径
    page->load(QUrl("file:///E:/BUAA/InstituteOfSoftware/BdMap/BaiduMap/bdmap.html"));
}

void MainWindow::on_pushBtn_locate_clicked()
{
    QString Lng = ui->lineEdit_longitude->text();
    QString Lat = ui->lineEdit_latitude->text();
    QString cmd = QString("setPoint(%1,%2)").arg(Lng).arg(Lat);
    page->runJavaScript(cmd);
}
