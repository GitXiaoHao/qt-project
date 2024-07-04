/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QPushButton *btn_Title;
    QLabel *label_About;
    QPushButton *btn_CurrentMusic;
    QPushButton *btn_LocalMusic;
    QPushButton *btn_FavorMusic;
    QLabel *label_AutoInfo;
    QSlider *PositionSlider;
    QSlider *VolumeSlider;
    QLabel *label_Motto;
    QLabel *label_Position;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QLabel *label_page0;
    QListWidget *listWidget_HistorytMusic;
    QWidget *page_1;
    QLabel *label_page1;
    QListWidget *listWidget_localMusic;
    QWidget *page_2;
    QLabel *label_page2;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QWidget *page_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_About;
    QPushButton *btn_Skin;
    QPushButton *btn_Min;
    QPushButton *btn_Close;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_Pre;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_play;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_Next;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_PlayMode;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_AddMusic;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_Voice;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/qqmusic.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainWidget->setWindowIcon(icon);
        mainWidget->setStyleSheet(QString::fromUtf8(""));
        btn_Title = new QPushButton(mainWidget);
        btn_Title->setObjectName(QString::fromUtf8("btn_Title"));
        btn_Title->setGeometry(QRect(10, 10, 35, 35));
        btn_Title->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Title->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/image/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Title->setIcon(icon1);
        btn_Title->setIconSize(QSize(30, 30));
        label_About = new QLabel(mainWidget);
        label_About->setObjectName(QString::fromUtf8("label_About"));
        label_About->setGeometry(QRect(50, 10, 171, 35));
        label_About->setCursor(QCursor(Qt::ArrowCursor));
        label_About->setLayoutDirection(Qt::LeftToRight);
        label_About->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        label_About->setTextFormat(Qt::AutoText);
        label_About->setAlignment(Qt::AlignCenter);
        btn_CurrentMusic = new QPushButton(mainWidget);
        btn_CurrentMusic->setObjectName(QString::fromUtf8("btn_CurrentMusic"));
        btn_CurrentMusic->setGeometry(QRect(30, 110, 130, 40));
        btn_CurrentMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_CurrentMusic->setLayoutDirection(Qt::LeftToRight);
        btn_CurrentMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/image/current-music.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_CurrentMusic->setIcon(icon2);
        btn_CurrentMusic->setIconSize(QSize(30, 30));
        btn_CurrentMusic->setFlat(true);
        btn_LocalMusic = new QPushButton(mainWidget);
        btn_LocalMusic->setObjectName(QString::fromUtf8("btn_LocalMusic"));
        btn_LocalMusic->setGeometry(QRect(30, 170, 130, 40));
        btn_LocalMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_LocalMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/image/local-music.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_LocalMusic->setIcon(icon3);
        btn_LocalMusic->setIconSize(QSize(30, 30));
        btn_FavorMusic = new QPushButton(mainWidget);
        btn_FavorMusic->setObjectName(QString::fromUtf8("btn_FavorMusic"));
        btn_FavorMusic->setGeometry(QRect(30, 230, 130, 40));
        btn_FavorMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_FavorMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/image/favo-music.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_FavorMusic->setIcon(icon4);
        btn_FavorMusic->setIconSize(QSize(30, 30));
        label_AutoInfo = new QLabel(mainWidget);
        label_AutoInfo->setObjectName(QString::fromUtf8("label_AutoInfo"));
        label_AutoInfo->setGeometry(QRect(130, 440, 150, 150));
        label_AutoInfo->setCursor(QCursor(Qt::PointingHandCursor));
        label_AutoInfo->setPixmap(QPixmap(QString::fromUtf8(":/image/image/singer.png")));
        label_AutoInfo->setScaledContents(true);
        PositionSlider = new QSlider(mainWidget);
        PositionSlider->setObjectName(QString::fromUtf8("PositionSlider"));
        PositionSlider->setGeometry(QRect(290, 490, 350, 20));
        PositionSlider->setStyleSheet(QString::fromUtf8("QSlider::add-page:Horizontal\n"
"{     \n"
"background-color: rgba(255, 255, 255,150);\n"
"height:4px;  \n"
"} \n"
"QSlider::sub-page:Horizontal   \n"
"{  \n"
"background-color: rgb(255, 255, 255);\n"
"height:4px;\n"
"}\n"
"QSlider::groove:Horizontal   \n"
"{ \n"
"background:transparent; \n"
"height:4px;\n"
"}  \n"
"QSlider::handle:Horizontal\n"
"{ \n"
"height:16px; \n"
"width:16px; \n"
"border-image:url(:/image/image/sliderHandle.png);\n"
"margin: -6 0px; \n"
"}\n"
"      \n"
""));
        PositionSlider->setOrientation(Qt::Horizontal);
        VolumeSlider = new QSlider(mainWidget);
        VolumeSlider->setObjectName(QString::fromUtf8("VolumeSlider"));
        VolumeSlider->setGeometry(QRect(760, 400, 35, 130));
        VolumeSlider->setStyleSheet(QString::fromUtf8(" QSlider \n"
"    {  \n"
"        background-color: rgba(255,255,255,0.2);\n"
"        min-width:5px; \n"
"        max-width:5px;\n"
"        border:15px solid rgba(255,255,255,0.2); \n"
"    }\n"
"     QSlider::add-page:vertical\n"
"     {      \n"
"       \n"
"	    background-color: rgb(250, 250, 0);\n"
"        width:4px;\n"
"     }\n"
"     QSlider::sub-page:vertical  \n"
"    {\n"
"        background-color: rgba(255,255,255,0.5); \n"
"        width:4px;\n"
"     }\n"
"    QSlider::groove:vertical \n"
"    {\n"
"        background:transparent;\n"
"        width:6px;\n"
"    }\n"
"    QSlider::handle:vertical \n"
"    {\n"
"         height: 13px;\n"
"        width:13px;\n"
" \n"
" margin: -0 -4px; \n"
"	border-image: url(:/image/image/volumeHandle.png);\n"
"     }"));
        VolumeSlider->setOrientation(Qt::Vertical);
        label_Motto = new QLabel(mainWidget);
        label_Motto->setObjectName(QString::fromUtf8("label_Motto"));
        label_Motto->setGeometry(QRect(280, 450, 351, 17));
        label_Motto->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_Position = new QLabel(mainWidget);
        label_Position->setObjectName(QString::fromUtf8("label_Position"));
        label_Position->setGeometry(QRect(650, 490, 111, 20));
        label_Position->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_Position->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(mainWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(190, 90, 521, 341));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        label_page0 = new QLabel(page_0);
        label_page0->setObjectName(QString::fromUtf8("label_page0"));
        label_page0->setGeometry(QRect(0, 0, 81, 21));
        label_page0->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_page0->setAlignment(Qt::AlignCenter);
        listWidget_HistorytMusic = new QListWidget(page_0);
        listWidget_HistorytMusic->setObjectName(QString::fromUtf8("listWidget_HistorytMusic"));
        listWidget_HistorytMusic->setGeometry(QRect(0, 40, 521, 300));
        listWidget_HistorytMusic->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"background:transparent;\n"
"border:0 px solid gray\n"
""));
        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        label_page1 = new QLabel(page_1);
        label_page1->setObjectName(QString::fromUtf8("label_page1"));
        label_page1->setGeometry(QRect(0, 0, 81, 21));
        label_page1->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_page1->setScaledContents(false);
        label_page1->setAlignment(Qt::AlignCenter);
        listWidget_localMusic = new QListWidget(page_1);
        listWidget_localMusic->setObjectName(QString::fromUtf8("listWidget_localMusic"));
        listWidget_localMusic->setGeometry(QRect(0, 40, 521, 300));
        listWidget_localMusic->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"background:transparent;"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_page2 = new QLabel(page_2);
        label_page2->setObjectName(QString::fromUtf8("label_page2"));
        label_page2->setGeometry(QRect(0, 0, 81, 21));
        label_page2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_page2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 0, 171, 35));
        lineEdit->setStyleSheet(QString::fromUtf8("background:transparent;"));
        lineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 40, 521, 341));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget->setStyleSheet(QString::fromUtf8("border-top-color: rgb(114, 159, 207);\n"
"selection-color: rgb(52, 101, 164);"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setColumnCount(4);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setEnabled(true);
        stackedWidget->addWidget(page_3);
        layoutWidget = new QWidget(mainWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(460, 0, 321, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_About = new QPushButton(layoutWidget);
        btn_About->setObjectName(QString::fromUtf8("btn_About"));
        btn_About->setEnabled(true);
        btn_About->setCursor(QCursor(Qt::PointingHandCursor));
        btn_About->setMouseTracking(false);
        btn_About->setAutoFillBackground(false);
        btn_About->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/image/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_About->setIcon(icon5);
        btn_About->setIconSize(QSize(30, 30));
        btn_About->setCheckable(false);
        btn_About->setAutoRepeat(false);
        btn_About->setAutoRepeatDelay(300);
        btn_About->setAutoRepeatInterval(100);
        btn_About->setAutoDefault(false);
        btn_About->setFlat(true);

        horizontalLayout_2->addWidget(btn_About);

        btn_Skin = new QPushButton(layoutWidget);
        btn_Skin->setObjectName(QString::fromUtf8("btn_Skin"));
        btn_Skin->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Skin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/image/skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Skin->setIcon(icon6);
        btn_Skin->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(btn_Skin);

        btn_Min = new QPushButton(layoutWidget);
        btn_Min->setObjectName(QString::fromUtf8("btn_Min"));
        btn_Min->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Min->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/image/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Min->setIcon(icon7);
        btn_Min->setIconSize(QSize(50, 50));
        btn_Min->setFlat(true);

        horizontalLayout_2->addWidget(btn_Min);

        btn_Close = new QPushButton(layoutWidget);
        btn_Close->setObjectName(QString::fromUtf8("btn_Close"));
        btn_Close->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Close->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/image/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Close->setIcon(icon8);
        btn_Close->setIconSize(QSize(30, 30));
        btn_Close->setFlat(true);

        horizontalLayout_2->addWidget(btn_Close);

        layoutWidget1 = new QWidget(mainWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(290, 530, 551, 34));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_Pre = new QPushButton(layoutWidget1);
        btn_Pre->setObjectName(QString::fromUtf8("btn_Pre"));
        btn_Pre->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Pre->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/image-hover/pre-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Pre->setIcon(icon9);

        horizontalLayout->addWidget(btn_Pre);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_play = new QPushButton(layoutWidget1);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setCursor(QCursor(Qt::PointingHandCursor));
        btn_play->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/image-hover/pase-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_play->setIcon(icon10);

        horizontalLayout->addWidget(btn_play);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_Next = new QPushButton(layoutWidget1);
        btn_Next->setObjectName(QString::fromUtf8("btn_Next"));
        btn_Next->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/image-hover/next-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Next->setIcon(icon11);

        horizontalLayout->addWidget(btn_Next);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        btn_PlayMode = new QPushButton(layoutWidget1);
        btn_PlayMode->setObjectName(QString::fromUtf8("btn_PlayMode"));
        btn_PlayMode->setCursor(QCursor(Qt::PointingHandCursor));
        btn_PlayMode->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/image-hover/loop-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_PlayMode->setIcon(icon12);
        btn_PlayMode->setIconSize(QSize(30, 30));
        btn_PlayMode->setFlat(true);

        horizontalLayout_3->addWidget(btn_PlayMode);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        btn_AddMusic = new QPushButton(layoutWidget1);
        btn_AddMusic->setObjectName(QString::fromUtf8("btn_AddMusic"));
        btn_AddMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_AddMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/image/image/addFromLocal.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_AddMusic->setIcon(icon13);
        btn_AddMusic->setIconSize(QSize(30, 30));
        btn_AddMusic->setFlat(true);

        horizontalLayout_3->addWidget(btn_AddMusic);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        btn_Voice = new QPushButton(layoutWidget1);
        btn_Voice->setObjectName(QString::fromUtf8("btn_Voice"));
        btn_Voice->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Voice->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/music-voice.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image-hover/music-voice-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/music-voice.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(btn_Voice);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(mainWidget);

        stackedWidget->setCurrentIndex(2);
        btn_About->setDefault(false);


        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "mainWidget", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_Title->setToolTip(QApplication::translate("mainWidget", "\346\222\255\346\224\276\345\231\250\344\277\241\346\201\257", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Title->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_About->setToolTip(QApplication::translate("mainWidget", "\346\222\255\346\224\276\345\231\250\344\277\241\346\201\257", nullptr));
#endif // QT_NO_TOOLTIP
        label_About->setText(QApplication::translate("mainWidget", "Music Player|By xiaohe", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_CurrentMusic->setToolTip(QApplication::translate("mainWidget", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
#endif // QT_NO_TOOLTIP
        btn_CurrentMusic->setText(QApplication::translate("mainWidget", "\345\216\206\345\217\262\346\222\255\346\224\276", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_LocalMusic->setToolTip(QApplication::translate("mainWidget", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
#endif // QT_NO_TOOLTIP
        btn_LocalMusic->setText(QApplication::translate("mainWidget", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_FavorMusic->setToolTip(QApplication::translate("mainWidget", "\346\210\221\345\226\234\346\254\242", nullptr));
#endif // QT_NO_TOOLTIP
        btn_FavorMusic->setText(QApplication::translate("mainWidget", "\345\234\250\347\272\277\346\220\234\347\264\242", nullptr));
        label_AutoInfo->setText(QString());
        label_Motto->setText(QApplication::translate("mainWidget", "Music is also a way of life", nullptr));
        label_Position->setText(QApplication::translate("mainWidget", "00:00/00:00", nullptr));
        label_page0->setText(QApplication::translate("mainWidget", "\345\216\206\345\217\262\346\222\255\346\224\276", nullptr));
        label_page1->setText(QApplication::translate("mainWidget", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        label_page2->setText(QApplication::translate("mainWidget", "\345\234\250\347\272\277\346\220\234\347\264\242", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("mainWidget", "\346\220\234\347\264\242", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_About->setToolTip(QApplication::translate("mainWidget", "\345\205\263\344\272\216", nullptr));
#endif // QT_NO_TOOLTIP
        btn_About->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Skin->setToolTip(QApplication::translate("mainWidget", "\346\233\264\346\215\242\347\232\256\350\202\244", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Skin->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Min->setToolTip(QApplication::translate("mainWidget", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Close->setToolTip(QApplication::translate("mainWidget", "\345\205\263\351\227\255\345\272\224\347\224\250", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Close->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Pre->setToolTip(QApplication::translate("mainWidget", "\344\270\212\344\270\200\346\233\262", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Pre->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_play->setToolTip(QApplication::translate("mainWidget", "\346\232\202\345\201\234", nullptr));
#endif // QT_NO_TOOLTIP
        btn_play->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Next->setToolTip(QApplication::translate("mainWidget", "\344\270\213\344\270\200\346\233\262", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Next->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_PlayMode->setToolTip(QApplication::translate("mainWidget", "\346\222\255\346\224\276\346\250\241\345\274\217", nullptr));
#endif // QT_NO_TOOLTIP
        btn_PlayMode->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_AddMusic->setToolTip(QApplication::translate("mainWidget", "\346\267\273\345\212\240\351\237\263\344\271\220", nullptr));
#endif // QT_NO_TOOLTIP
        btn_AddMusic->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Voice->setToolTip(QApplication::translate("mainWidget", "\351\237\263\351\207\217\350\260\203\350\212\202", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Voice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
