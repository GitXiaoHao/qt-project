#include "widget.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setStyleSheet("Widget{background-color: #808e9b};");
    w.setWindowTitle("车牌识别");
    w.setMinimumSize(500, 600); //设置窗口大小
    w.setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
    w.show();
    return a.exec();
}

