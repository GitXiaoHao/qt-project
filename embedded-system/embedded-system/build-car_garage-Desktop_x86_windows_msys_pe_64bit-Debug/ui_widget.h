/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *beginBtn;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLCDNumber *lcd;
    QPushButton *openPir;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(758, 660);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 535, 399));
        label->setFrameShape(QFrame::Box);
        beginBtn = new QPushButton(Widget);
        beginBtn->setObjectName(QString::fromUtf8("beginBtn"));
        beginBtn->setGeometry(QRect(580, 340, 151, 121));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 500, 72, 15));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 530, 731, 111));
        lcd = new QLCDNumber(Widget);
        lcd->setObjectName(QString::fromUtf8("lcd"));
        lcd->setGeometry(QRect(10, 10, 711, 51));
        lcd->setDigitCount(20);
        openPir = new QPushButton(Widget);
        openPir->setObjectName(QString::fromUtf8("openPir"));
        openPir->setGeometry(QRect(580, 90, 151, 111));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        beginBtn->setText(QApplication::translate("Widget", "\350\257\206\345\210\253", nullptr));
        label_2->setText(QApplication::translate("Widget", "\350\257\206\345\210\253\347\273\223\346\236\234", nullptr));
        openPir->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
