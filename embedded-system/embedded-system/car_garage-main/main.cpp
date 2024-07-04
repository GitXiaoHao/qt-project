#include "widget.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.setFixedSize(758,660);

    // 设置项目名称和图标
    w.setWindowTitle("QT实训结课项目-车牌识别");
//    w.setWindowIcon(QIcon(QPixmap("C:\\Users\\wxn\\Desktop\\2.jpg")));

    w.show();
    return a.exec();
}
