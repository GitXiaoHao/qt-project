/********************************************************************************
** Form generated from reading UI file 'changecolorform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECOLORFORM_H
#define UI_CHANGECOLORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeColorForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *ptnOrange;
    QPushButton *ptnYellow;
    QPushButton *ptnBlue;
    QPushButton *ptnGreen;
    QPushButton *ptnPink;
    QPushButton *ptnRed;

    void setupUi(QWidget *ChangeColorForm)
    {
        if (ChangeColorForm->objectName().isEmpty())
            ChangeColorForm->setObjectName(QString::fromUtf8("ChangeColorForm"));
        ChangeColorForm->resize(124, 117);
        ChangeColorForm->setMaximumSize(QSize(124, 117));
        ChangeColorForm->setCursor(QCursor(Qt::PointingHandCursor));
        gridLayout = new QGridLayout(ChangeColorForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, -1, -1, -1);
        ptnOrange = new QPushButton(ChangeColorForm);
        ptnOrange->setObjectName(QString::fromUtf8("ptnOrange"));

        gridLayout->addWidget(ptnOrange, 2, 0, 1, 1);

        ptnYellow = new QPushButton(ChangeColorForm);
        ptnYellow->setObjectName(QString::fromUtf8("ptnYellow"));

        gridLayout->addWidget(ptnYellow, 0, 0, 1, 1);

        ptnBlue = new QPushButton(ChangeColorForm);
        ptnBlue->setObjectName(QString::fromUtf8("ptnBlue"));

        gridLayout->addWidget(ptnBlue, 1, 0, 1, 1);

        ptnGreen = new QPushButton(ChangeColorForm);
        ptnGreen->setObjectName(QString::fromUtf8("ptnGreen"));
        ptnGreen->setEnabled(true);

        gridLayout->addWidget(ptnGreen, 2, 1, 1, 1);

        ptnPink = new QPushButton(ChangeColorForm);
        ptnPink->setObjectName(QString::fromUtf8("ptnPink"));

        gridLayout->addWidget(ptnPink, 1, 1, 1, 1);

        ptnRed = new QPushButton(ChangeColorForm);
        ptnRed->setObjectName(QString::fromUtf8("ptnRed"));

        gridLayout->addWidget(ptnRed, 0, 1, 1, 1);


        retranslateUi(ChangeColorForm);

        QMetaObject::connectSlotsByName(ChangeColorForm);
    } // setupUi

    void retranslateUi(QWidget *ChangeColorForm)
    {
        ChangeColorForm->setWindowTitle(QApplication::translate("ChangeColorForm", "Form", nullptr));
        ptnOrange->setText(QString());
        ptnYellow->setText(QString());
        ptnBlue->setText(QString());
        ptnGreen->setText(QString());
        ptnPink->setText(QString());
        ptnRed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangeColorForm: public Ui_ChangeColorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECOLORFORM_H
