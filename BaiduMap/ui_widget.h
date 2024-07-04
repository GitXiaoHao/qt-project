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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loadMap;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditlng;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditlat;
    QPushButton *setPosition;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEditStartlng;
    QLabel *label_4;
    QLineEdit *lineEditStartlat;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditStoplng;
    QLabel *label_6;
    QLineEdit *lineEditStoplat;
    QPushButton *pushButtonPathPlanning;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_Reallng;
    QLabel *label_8;
    QLineEdit *lineEditReallat;
    QWebEngineView *graphicsView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1300, 827);
        gridLayout_8 = new QGridLayout(Widget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        loadMap = new QPushButton(Widget);
        loadMap->setObjectName(QString::fromUtf8("loadMap"));

        horizontalLayout_3->addWidget(loadMap);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditlng = new QLineEdit(Widget);
        lineEditlng->setObjectName(QString::fromUtf8("lineEditlng"));

        horizontalLayout->addWidget(lineEditlng);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditlat = new QLineEdit(Widget);
        lineEditlat->setObjectName(QString::fromUtf8("lineEditlat"));

        horizontalLayout_2->addWidget(lineEditlat);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        setPosition = new QPushButton(Widget);
        setPosition->setObjectName(QString::fromUtf8("setPosition"));

        horizontalLayout_4->addWidget(setPosition);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEditStartlng = new QLineEdit(groupBox_2);
        lineEditStartlng->setObjectName(QString::fromUtf8("lineEditStartlng"));

        gridLayout->addWidget(lineEditStartlng, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEditStartlat = new QLineEdit(groupBox_2);
        lineEditStartlat->setObjectName(QString::fromUtf8("lineEditStartlat"));

        gridLayout->addWidget(lineEditStartlat, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        lineEditStoplng = new QLineEdit(groupBox_3);
        lineEditStoplng->setObjectName(QString::fromUtf8("lineEditStoplng"));

        gridLayout_4->addWidget(lineEditStoplng, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        lineEditStoplat = new QLineEdit(groupBox_3);
        lineEditStoplat->setObjectName(QString::fromUtf8("lineEditStoplat"));

        gridLayout_4->addWidget(lineEditStoplat, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        pushButtonPathPlanning = new QPushButton(groupBox);
        pushButtonPathPlanning->setObjectName(QString::fromUtf8("pushButtonPathPlanning"));

        verticalLayout_2->addWidget(pushButtonPathPlanning);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        lineEdit_Reallng = new QLineEdit(groupBox_4);
        lineEdit_Reallng->setObjectName(QString::fromUtf8("lineEdit_Reallng"));

        gridLayout_6->addWidget(lineEdit_Reallng, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 1, 0, 1, 1);

        lineEditReallat = new QLineEdit(groupBox_4);
        lineEditReallat->setObjectName(QString::fromUtf8("lineEditReallat"));

        gridLayout_6->addWidget(lineEditReallat, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_4);


        verticalLayout_3->addLayout(horizontalLayout_7);

        graphicsView = new QWebEngineView(Widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_3->addWidget(graphicsView);

        verticalLayout_3->setStretch(1, 1);

        gridLayout_8->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        loadMap->setText(QApplication::translate("Widget", "\345\212\240\350\275\275\345\234\260\345\233\276", nullptr));
        label->setText(QApplication::translate("Widget", "\347\273\217\345\272\246", nullptr));
        label_2->setText(QApplication::translate("Widget", "\347\272\254\345\272\246", nullptr));
        setPosition->setText(QApplication::translate("Widget", "\345\256\232\344\275\215", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\345\257\274\350\210\252", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\350\265\267\347\202\271", nullptr));
        label_3->setText(QApplication::translate("Widget", "\347\273\217\345\272\246", nullptr));
        label_4->setText(QApplication::translate("Widget", "\347\272\254\345\272\246", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\347\273\210\347\202\271", nullptr));
        label_5->setText(QApplication::translate("Widget", "\347\273\217\345\272\246", nullptr));
        label_6->setText(QApplication::translate("Widget", "\347\272\254\345\272\246", nullptr));
        pushButtonPathPlanning->setText(QApplication::translate("Widget", "\350\267\257\345\276\204\350\247\204\345\210\222", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "\345\256\236\346\227\266\344\275\215\347\275\256", nullptr));
        label_7->setText(QApplication::translate("Widget", "\347\273\217\345\272\246", nullptr));
        label_8->setText(QApplication::translate("Widget", "\347\272\254\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
