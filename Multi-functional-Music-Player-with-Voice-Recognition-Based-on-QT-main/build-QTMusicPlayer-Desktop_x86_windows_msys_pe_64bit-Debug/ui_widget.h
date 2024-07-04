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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QPushButton *pushButtonLoop;
    QPushButton *pushButtonLastsong;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonNextsong;
    QPushButton *pushButtonSound;
    QSlider *PlayCourseSlider;
    QLabel *Curlabel;
    QLabel *totallabel;
    QSlider *verticalSliderVolumn;
    QPushButton *pushButtonLyric;
    QPushButton *pushButtondownload;
    QPushButton *pushButtondetails;
    QLabel *labelSongname;
    QPushButton *pushButtonaddMylove;
    QWidget *widget_2;
    QLineEdit *lineEdit;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonLastpage;
    QPushButton *pushButtonNextpage;
    QPushButton *pushButtoncloth;
    QStackedWidget *stackedWidget;
    QWidget *pageFindmusic;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollAreaToplist;
    QWidget *toplistWidget;
    QWidget *tab_2;
    QTabWidget *tabWidget_4;
    QWidget *tab_5;
    QWidget *tab_8;
    QWidget *tab_9;
    QWidget *tab_12;
    QWidget *tab_11;
    QWidget *pageVideo;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *MVwidget;
    QSlider *horizontalSliderMV;
    QPushButton *pushButtonMVplay;
    QSlider *horizontalSliderMVvolume;
    QLabel *CurlabelMV;
    QLabel *totallabelMV;
    QPushButton *pushButton;
    QWidget *pageOnlineList;
    QTableWidget *tableWidgetPlayList;
    QWidget *pageMylove;
    QTableWidget *tableWidgetMylove;
    QLabel *labelMylove;
    QPushButton *pushButtonPlayall;
    QPushButton *pushButtonDownload;
    QLabel *labelTotal;
    QPushButton *pushButton_3;
    QWidget *page;
    QTextBrowser *textBrowser;
    QLabel *labeldetail;
    QPushButton *pushButtonalbum;
    QWidget *pageMycreate;
    QTableWidget *tableWidgetMycreate;
    QPushButton *pushButtonPlayallMycreate;
    QPushButton *pushButtonDownloadMycreate;
    QLabel *labelMycreate;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButtonFindmusic;
    QPushButton *pushButtonVideo;
    QPushButton *pushButtonMylove;
    QPushButton *pushButtonLocalDownload;
    QLabel *labelRecommend;
    QLabel *labelLocal;
    QLabel *label;
    QPushButton *pushButtonAddmusiclist;
    QListWidget *listWidget;
    QPushButton *pushButtonOnlineList;
    QLineEdit *lineEditSpeech;
    QPushButton *pushButtonStart;
    QLabel *labelSpeech;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(950, 693);
        Widget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 530, 961, 161));
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButtonLoop = new QPushButton(widget);
        pushButtonLoop->setObjectName(QString::fromUtf8("pushButtonLoop"));
        pushButtonLoop->setEnabled(true);
        pushButtonLoop->setGeometry(QRect(330, 110, 25, 25));
        pushButtonLoop->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonLoop->setFocusPolicy(Qt::NoFocus);
        pushButtonLoop->setAutoFillBackground(false);
        pushButtonLoop->setStyleSheet(QString::fromUtf8("border: none;"));
        pushButtonLoop->setIconSize(QSize(25, 25));
        pushButtonLoop->setCheckable(true);
        pushButtonLoop->setChecked(false);
        pushButtonLoop->setAutoRepeat(false);
        pushButtonLoop->setAutoRepeatDelay(300);
        pushButtonLoop->setAutoDefault(false);
        pushButtonLastsong = new QPushButton(widget);
        pushButtonLastsong->setObjectName(QString::fromUtf8("pushButtonLastsong"));
        pushButtonLastsong->setGeometry(QRect(380, 110, 21, 21));
        pushButtonLastsong->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonLastsong->setFocusPolicy(Qt::NoFocus);
        pushButtonLastsong->setAutoFillBackground(false);
        pushButtonLastsong->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	\n"
"	border-image: url(:/picture/lastsong1.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	\n"
"	border-image: url(:/picture/LastSong.png);\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	border-image: url(:/picture/lastsong1.png);\n"
"}"));
        pushButtonLastsong->setIconSize(QSize(40, 30));
        pushButtonPlay = new QPushButton(widget);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        pushButtonPlay->setEnabled(true);
        pushButtonPlay->setGeometry(QRect(450, 100, 41, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonPlay->sizePolicy().hasHeightForWidth());
        pushButtonPlay->setSizePolicy(sizePolicy);
        pushButtonPlay->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonPlay->setFocusPolicy(Qt::NoFocus);
        pushButtonPlay->setAutoFillBackground(false);
        pushButtonPlay->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/picture/play.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/picture/play1 .png);\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	border-image: url(:/picture/play.png);\n"
"}\n"
""));
        pushButtonPlay->setIconSize(QSize(40, 30));
        pushButtonNextsong = new QPushButton(widget);
        pushButtonNextsong->setObjectName(QString::fromUtf8("pushButtonNextsong"));
        pushButtonNextsong->setGeometry(QRect(540, 110, 21, 21));
        pushButtonNextsong->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNextsong->setFocusPolicy(Qt::NoFocus);
        pushButtonNextsong->setAutoFillBackground(false);
        pushButtonNextsong->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	\n"
"	border-image: url(:/picture/nextsong1.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	\n"
"	border-image: url(:/picture/NextSong.png);\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	border-image: url(:/picture/nextsong1.png);\n"
"}"));
        pushButtonNextsong->setIconSize(QSize(40, 30));
        pushButtonSound = new QPushButton(widget);
        pushButtonSound->setObjectName(QString::fromUtf8("pushButtonSound"));
        pushButtonSound->setGeometry(QRect(754, 120, 21, 21));
        pushButtonSound->setSizeIncrement(QSize(0, 0));
        pushButtonSound->setBaseSize(QSize(40, 30));
        pushButtonSound->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonSound->setFocusPolicy(Qt::NoFocus);
        pushButtonSound->setAutoFillBackground(false);
        pushButtonSound->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image:url(:/picture/volumn1.png)\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"border-image:url(:/picture/volumn.png)\n"
"}\n"
"\n"
""));
        pushButtonSound->setIconSize(QSize(40, 40));
        pushButtonSound->setAutoDefault(false);
        PlayCourseSlider = new QSlider(widget);
        PlayCourseSlider->setObjectName(QString::fromUtf8("PlayCourseSlider"));
        PlayCourseSlider->setGeometry(QRect(290, 70, 381, 21));
        PlayCourseSlider->setStyleSheet(QString::fromUtf8("QSlider::add-page:Horizontal#PlayCourseSlider\n"
"\n"
"{\n"
"	background-color: rgb(69, 69, 70);height:5px;\n"
"}\n"
"QSlider::sub-page:Horizontal#PlayCourseSlider\n"
"{\n"
"	height:5px;\n"
"	background-color: rgb(85, 170, 255);\n"
"}\n"
"QSlider::handle:Horizontal#PlayCourseSlider\n"
"{\n"
"	width:14px;border-image: url(:/picture/musicPoint.png);margin:-5 px -5px;\n"
"}\n"
"QSlider::groove:Horizontal#PlayCourseSlider\n"
"{\n"
"	background:rgb(0, 255, 0);height:5px;\n"
"}\n"
"\n"
""));
        PlayCourseSlider->setOrientation(Qt::Horizontal);
        Curlabel = new QLabel(widget);
        Curlabel->setObjectName(QString::fromUtf8("Curlabel"));
        Curlabel->setGeometry(QRect(250, 70, 35, 15));
        totallabel = new QLabel(widget);
        totallabel->setObjectName(QString::fromUtf8("totallabel"));
        totallabel->setGeometry(QRect(680, 70, 35, 15));
        verticalSliderVolumn = new QSlider(widget);
        verticalSliderVolumn->setObjectName(QString::fromUtf8("verticalSliderVolumn"));
        verticalSliderVolumn->setGeometry(QRect(760, 10, 5, 101));
        verticalSliderVolumn->setStyleSheet(QString::fromUtf8("QSlider::add-page:Vertical#verticalSliderVolumn\n"
"{\n"
"	\n"
"	background-color: rgb(85, 170, 255);\n"
"}\n"
"QSlider::sub-page:Vertical#verticalSliderVolumn\n"
"{\n"
"background-color: rgb(69, 69, 70);\n"
"\n"
"	\n"
"}\n"
"QSlider::handle:Vertical#verticalSliderVolumn\n"
"{\n"
"	height:5px;border-image: url(:/picture/musicPoint.png);margin:-5px -5px;\n"
"}\n"
"QSlider::groove:Vertical#verticalSliderVolumn\n"
"{\n"
"	background:rgb(0, 255, 0);\n"
"}\n"
"\n"
""));
        verticalSliderVolumn->setSliderPosition(10);
        verticalSliderVolumn->setOrientation(Qt::Vertical);
        pushButtonLyric = new QPushButton(widget);
        pushButtonLyric->setObjectName(QString::fromUtf8("pushButtonLyric"));
        pushButtonLyric->setGeometry(QRect(800, 110, 31, 31));
        pushButtonLyric->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonLyric->setFocusPolicy(Qt::NoFocus);
        pushButtonLyric->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/picture/lyric1.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/picture/lyric.png);\n"
"}\n"
""));
        pushButtondownload = new QPushButton(widget);
        pushButtondownload->setObjectName(QString::fromUtf8("pushButtondownload"));
        pushButtondownload->setGeometry(QRect(845, 115, 21, 21));
        pushButtondownload->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtondownload->setFocusPolicy(Qt::NoFocus);
        pushButtondownload->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/picture/download1.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"border-image: url(:/picture/download.png);\n"
"}\n"
""));
        pushButtondetails = new QPushButton(widget);
        pushButtondetails->setObjectName(QString::fromUtf8("pushButtondetails"));
        pushButtondetails->setGeometry(QRect(20, 20, 121, 121));
        pushButtondetails->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtondetails->setStyleSheet(QString::fromUtf8("image: url(:/picture/record.png);\n"
"border: none;\n"
""));
        pushButtondetails->setIconSize(QSize(120, 120));
        labelSongname = new QLabel(widget);
        labelSongname->setObjectName(QString::fromUtf8("labelSongname"));
        labelSongname->setGeometry(QRect(160, 10, 111, 51));
        pushButtonaddMylove = new QPushButton(widget);
        pushButtonaddMylove->setObjectName(QString::fromUtf8("pushButtonaddMylove"));
        pushButtonaddMylove->setGeometry(QRect(210, 100, 31, 31));
        pushButtonaddMylove->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonaddMylove->setFocusPolicy(Qt::NoFocus);
        pushButtonaddMylove->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/MyLove.png);"));
        pushButtonaddMylove->setIconSize(QSize(31, 31));
        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 951, 51));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(450, 10, 111, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButtonSearch = new QPushButton(widget_2);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));
        pushButtonSearch->setGeometry(QRect(540, 11, 19, 19));
        pushButtonSearch->setFocusPolicy(Qt::NoFocus);
        pushButtonSearch->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding-top:4px;\n"
"border-image: url(:/picture/Search.png);\n"
"\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        pushButtonSearch->setIconSize(QSize(50, 50));
        pushButtonLastpage = new QPushButton(widget_2);
        pushButtonLastpage->setObjectName(QString::fromUtf8("pushButtonLastpage"));
        pushButtonLastpage->setGeometry(QRect(190, 0, 20, 20));
        pushButtonLastpage->setFocusPolicy(Qt::NoFocus);
        pushButtonLastpage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	\n"
"	border-image: url(:/picture/LastPage1.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	\n"
"	border-image: url(:/picture/LastPage.png);\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	border-image: url(:/picture/LastPage1.png);\n"
"}\n"
""));
        pushButtonNextpage = new QPushButton(widget_2);
        pushButtonNextpage->setObjectName(QString::fromUtf8("pushButtonNextpage"));
        pushButtonNextpage->setGeometry(QRect(210, 0, 21, 21));
        pushButtonNextpage->setFocusPolicy(Qt::NoFocus);
        pushButtonNextpage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	\n"
"	border-image: url(:/picture/NextPage1.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	\n"
"	border-image: url(:/picture/NextPage.png)\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	border-image: url(:/picture/NextPage1.png)\n"
"}\n"
""));
        pushButtoncloth = new QPushButton(widget_2);
        pushButtoncloth->setObjectName(QString::fromUtf8("pushButtoncloth"));
        pushButtoncloth->setGeometry(QRect(820, 10, 21, 21));
        pushButtoncloth->setFocusPolicy(Qt::NoFocus);
        pushButtoncloth->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image: url(:/picture/cloth1.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/picture/cloth.png);\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	border-image: url(:/picture/cloth1.png);\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(160, 50, 791, 481));
        stackedWidget->setFocusPolicy(Qt::StrongFocus);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pageFindmusic = new QWidget();
        pageFindmusic->setObjectName(QString::fromUtf8("pageFindmusic"));
        tabWidget = new QTabWidget(pageFindmusic);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 771, 471));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMouseTracking(false);
        tab->setLayoutDirection(Qt::LeftToRight);
        tab->setAutoFillBackground(false);
        scrollAreaToplist = new QScrollArea(tab);
        scrollAreaToplist->setObjectName(QString::fromUtf8("scrollAreaToplist"));
        scrollAreaToplist->setGeometry(QRect(0, 0, 802, 452));
        scrollAreaToplist->setFocusPolicy(Qt::NoFocus);
        scrollAreaToplist->setWidgetResizable(true);
        toplistWidget = new QWidget();
        toplistWidget->setObjectName(QString::fromUtf8("toplistWidget"));
        toplistWidget->setGeometry(QRect(0, 0, 800, 450));
        toplistWidget->setFocusPolicy(Qt::NoFocus);
        toplistWidget->setAutoFillBackground(false);
        scrollAreaToplist->setWidget(toplistWidget);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget_4 = new QTabWidget(tab_2);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 771, 451));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_4->addTab(tab_5, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget_4->addTab(tab_9, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        tabWidget_4->addTab(tab_12, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        tabWidget_4->addTab(tab_11, QString());
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(pageFindmusic);
        pageVideo = new QWidget();
        pageVideo->setObjectName(QString::fromUtf8("pageVideo"));
        tabWidget_2 = new QTabWidget(pageVideo);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 781, 481));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        MVwidget = new QWidget(tab_4);
        MVwidget->setObjectName(QString::fromUtf8("MVwidget"));
        MVwidget->setGeometry(QRect(0, 0, 761, 401));
        horizontalSliderMV = new QSlider(MVwidget);
        horizontalSliderMV->setObjectName(QString::fromUtf8("horizontalSliderMV"));
        horizontalSliderMV->setGeometry(QRect(0, 385, 761, 22));
        horizontalSliderMV->setStyleSheet(QString::fromUtf8("QSlider::add-page:Horizontal#horizontalSliderMV\n"
"\n"
"{\n"
"	background-color: rgb(69, 69, 70);height:5px;\n"
"}\n"
"QSlider::sub-page:Horizontal#horizontalSliderMV\n"
"{\n"
"	height:5px;\n"
"	background-color: rgb(85, 170, 255);\n"
"}\n"
"QSlider::handle:Horizontal#horizontalSliderMV\n"
"{\n"
"	width:14px;border-image: url(:/picture/musicPoint.png);margin:-5 px -5px;\n"
"}\n"
"QSlider::groove:Horizontal#horizontalSliderMV\n"
"{\n"
"	background:rgb(0, 255, 0);height:5px;\n"
"}\n"
""));
        horizontalSliderMV->setOrientation(Qt::Horizontal);
        pushButtonMVplay = new QPushButton(tab_4);
        pushButtonMVplay->setObjectName(QString::fromUtf8("pushButtonMVplay"));
        pushButtonMVplay->setGeometry(QRect(40, 410, 16, 21));
        pushButtonMVplay->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/picture/play.png);\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/picture/play1 .png);\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	border-image: url(:/picture/play.png);\n"
"}\n"
""));
        horizontalSliderMVvolume = new QSlider(tab_4);
        horizontalSliderMVvolume->setObjectName(QString::fromUtf8("horizontalSliderMVvolume"));
        horizontalSliderMVvolume->setGeometry(QRect(570, 410, 160, 22));
        horizontalSliderMVvolume->setStyleSheet(QString::fromUtf8("QSlider::add-page:Horizontal#horizontalSliderMVvolume\n"
"\n"
"{\n"
"	background-color: rgb(69, 69, 70);height:5px;\n"
"}\n"
"QSlider::sub-page:Horizontal#horizontalSliderMVvolume\n"
"{\n"
"	height:5px;\n"
"	background-color: rgb(85, 170, 255);\n"
"}\n"
"QSlider::handle:Horizontal#horizontalSliderMVvolume\n"
"{\n"
"	width:14px;border-image: url(:/picture/musicPoint.png);margin:-5 px -5px;\n"
"}\n"
"QSlider::groove:Horizontal#horizontalSliderMVvolume\n"
"{\n"
"	background:rgb(0, 255, 0);height:5px;\n"
"}\n"
"\n"
""));
        horizontalSliderMVvolume->setOrientation(Qt::Horizontal);
        CurlabelMV = new QLabel(tab_4);
        CurlabelMV->setObjectName(QString::fromUtf8("CurlabelMV"));
        CurlabelMV->setGeometry(QRect(0, 410, 31, 16));
        totallabelMV = new QLabel(tab_4);
        totallabelMV->setObjectName(QString::fromUtf8("totallabelMV"));
        totallabelMV->setGeometry(QRect(70, 410, 31, 16));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 410, 21, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image:url(:/picture/volumn1.png)\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"border-image:url(:/picture/volumn.png)\n"
"}\n"
"\n"
""));
        tabWidget_2->addTab(tab_4, QString());
        stackedWidget->addWidget(pageVideo);
        pageOnlineList = new QWidget();
        pageOnlineList->setObjectName(QString::fromUtf8("pageOnlineList"));
        tableWidgetPlayList = new QTableWidget(pageOnlineList);
        tableWidgetPlayList->setObjectName(QString::fromUtf8("tableWidgetPlayList"));
        tableWidgetPlayList->setGeometry(QRect(1, 0, 791, 481));
        tableWidgetPlayList->setStyleSheet(QString::fromUtf8("QScrollBar::vertival\n"
"{\n"
"    background: white;\n"
"    min-width: 5px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    border-radius: 3px;\n"
"    background-color: #f3f3f3;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"\n"
"    border-radius: 3px;\n"
"    background-color: #dcdcdc;\n"
"}\n"
"QScrollBar::add-line,QScrollBar::sub-line\n"
"{\n"
"    background:white;\n"
"}\n"
""));
        stackedWidget->addWidget(pageOnlineList);
        pageMylove = new QWidget();
        pageMylove->setObjectName(QString::fromUtf8("pageMylove"));
        tableWidgetMylove = new QTableWidget(pageMylove);
        tableWidgetMylove->setObjectName(QString::fromUtf8("tableWidgetMylove"));
        tableWidgetMylove->setGeometry(QRect(0, 140, 791, 341));
        tableWidgetMylove->setStyleSheet(QString::fromUtf8("border: none;"));
        labelMylove = new QLabel(pageMylove);
        labelMylove->setObjectName(QString::fromUtf8("labelMylove"));
        labelMylove->setGeometry(QRect(230, 0, 211, 71));
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        labelMylove->setFont(font);
        pushButtonPlayall = new QPushButton(pageMylove);
        pushButtonPlayall->setObjectName(QString::fromUtf8("pushButtonPlayall"));
        pushButtonPlayall->setGeometry(QRect(190, 80, 100, 30));
        QFont font1;
        font1.setPointSize(10);
        pushButtonPlayall->setFont(font1);
        pushButtonPlayall->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonPlayall->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}\n"
""));
        pushButtonDownload = new QPushButton(pageMylove);
        pushButtonDownload->setObjectName(QString::fromUtf8("pushButtonDownload"));
        pushButtonDownload->setGeometry(QRect(360, 80, 100, 30));
        pushButtonDownload->setFont(font1);
        pushButtonDownload->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonDownload->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        labelTotal = new QLabel(pageMylove);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setGeometry(QRect(0, 10, 53, 15));
        pushButton_3 = new QPushButton(pageMylove);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 20, 101, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/Mylove1.png);"));
        stackedWidget->addWidget(pageMylove);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(450, 130, 321, 351));
        QFont font2;
        font2.setPointSize(6);
        textBrowser->setFont(font2);
        textBrowser->setStyleSheet(QString::fromUtf8("border: none;"));
        textBrowser->setLineWidth(1);
        labeldetail = new QLabel(page);
        labeldetail->setObjectName(QString::fromUtf8("labeldetail"));
        labeldetail->setGeometry(QRect(460, 30, 261, 61));
        QFont font3;
        font3.setPointSize(16);
        labeldetail->setFont(font3);
        labeldetail->setAlignment(Qt::AlignCenter);
        pushButtonalbum = new QPushButton(page);
        pushButtonalbum->setObjectName(QString::fromUtf8("pushButtonalbum"));
        pushButtonalbum->setGeometry(QRect(60, 80, 341, 341));
        pushButtonalbum->setStyleSheet(QString::fromUtf8("image: url(:/picture/record.png);\n"
"border: none;\n"
""));
        pushButtonalbum->setIconSize(QSize(341, 341));
        stackedWidget->addWidget(page);
        pageMycreate = new QWidget();
        pageMycreate->setObjectName(QString::fromUtf8("pageMycreate"));
        tableWidgetMycreate = new QTableWidget(pageMycreate);
        tableWidgetMycreate->setObjectName(QString::fromUtf8("tableWidgetMycreate"));
        tableWidgetMycreate->setGeometry(QRect(0, 140, 791, 341));
        tableWidgetMycreate->setStyleSheet(QString::fromUtf8("border: none;"));
        pushButtonPlayallMycreate = new QPushButton(pageMycreate);
        pushButtonPlayallMycreate->setObjectName(QString::fromUtf8("pushButtonPlayallMycreate"));
        pushButtonPlayallMycreate->setGeometry(QRect(210, 90, 100, 30));
        pushButtonPlayallMycreate->setFont(font1);
        pushButtonPlayallMycreate->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonPlayallMycreate->setTabletTracking(false);
        pushButtonPlayallMycreate->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        pushButtonDownloadMycreate = new QPushButton(pageMycreate);
        pushButtonDownloadMycreate->setObjectName(QString::fromUtf8("pushButtonDownloadMycreate"));
        pushButtonDownloadMycreate->setGeometry(QRect(410, 90, 100, 30));
        pushButtonDownloadMycreate->setFont(font1);
        pushButtonDownloadMycreate->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonDownloadMycreate->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        labelMycreate = new QLabel(pageMycreate);
        labelMycreate->setObjectName(QString::fromUtf8("labelMycreate"));
        labelMycreate->setGeometry(QRect(240, 10, 211, 71));
        labelMycreate->setFont(font);
        pushButton_2 = new QPushButton(pageMycreate);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 20, 101, 101));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/Mylove1.png);"));
        pushButton_2->setIconSize(QSize(100, 100));
        pushButton_2->setCheckable(false);
        stackedWidget->addWidget(pageMycreate);
        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 53, 161, 480));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 161, 480));
        pushButtonFindmusic = new QPushButton(scrollAreaWidgetContents);
        pushButtonFindmusic->setObjectName(QString::fromUtf8("pushButtonFindmusic"));
        pushButtonFindmusic->setGeometry(QRect(20, 30, 120, 40));
        QFont font4;
        font4.setPointSize(11);
        pushButtonFindmusic->setFont(font4);
        pushButtonFindmusic->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonFindmusic->setFocusPolicy(Qt::NoFocus);
        pushButtonFindmusic->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        pushButtonVideo = new QPushButton(scrollAreaWidgetContents);
        pushButtonVideo->setObjectName(QString::fromUtf8("pushButtonVideo"));
        pushButtonVideo->setGeometry(QRect(20, 70, 120, 40));
        pushButtonVideo->setFont(font4);
        pushButtonVideo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonVideo->setFocusPolicy(Qt::NoFocus);
        pushButtonVideo->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        pushButtonMylove = new QPushButton(scrollAreaWidgetContents);
        pushButtonMylove->setObjectName(QString::fromUtf8("pushButtonMylove"));
        pushButtonMylove->setGeometry(QRect(20, 260, 120, 40));
        pushButtonMylove->setFont(font4);
        pushButtonMylove->setFocusPolicy(Qt::NoFocus);
        pushButtonMylove->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}\n"
""));
        pushButtonLocalDownload = new QPushButton(scrollAreaWidgetContents);
        pushButtonLocalDownload->setObjectName(QString::fromUtf8("pushButtonLocalDownload"));
        pushButtonLocalDownload->setGeometry(QRect(20, 300, 120, 40));
        pushButtonLocalDownload->setFont(font4);
        pushButtonLocalDownload->setFocusPolicy(Qt::NoFocus);
        pushButtonLocalDownload->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        labelRecommend = new QLabel(scrollAreaWidgetContents);
        labelRecommend->setObjectName(QString::fromUtf8("labelRecommend"));
        labelRecommend->setGeometry(QRect(60, 10, 53, 20));
        labelRecommend->setFont(font1);
        labelLocal = new QLabel(scrollAreaWidgetContents);
        labelLocal->setObjectName(QString::fromUtf8("labelLocal"));
        labelLocal->setGeometry(QRect(60, 240, 53, 15));
        labelLocal->setFont(font1);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 350, 71, 16));
        pushButtonAddmusiclist = new QPushButton(scrollAreaWidgetContents);
        pushButtonAddmusiclist->setObjectName(QString::fromUtf8("pushButtonAddmusiclist"));
        pushButtonAddmusiclist->setGeometry(QRect(120, 350, 21, 21));
        pushButtonAddmusiclist->setFocusPolicy(Qt::NoFocus);
        pushButtonAddmusiclist->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding-top:4px;\n"
"\n"
"border-image: url(:/picture/addList.png);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 380, 141, 81));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget->setStyleSheet(QString::fromUtf8("QListView {\n"
"    font: 10pt  \"Microsoft YaHei\"; \n"
"    border: 1px solid white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QScrollBar::vertival\n"
"{\n"
"    background: white;\n"
"    min-width: 5px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    border-radius: 3px;\n"
"    background-color: #f3f3f3;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"\n"
"    border-radius: 3px;\n"
"    background-color: #dcdcdc;\n"
"}\n"
"QScrollBar::add-line,QScrollBar::sub-line\n"
"{\n"
"    background:white;\n"
"}\n"
""));
        pushButtonOnlineList = new QPushButton(scrollAreaWidgetContents);
        pushButtonOnlineList->setObjectName(QString::fromUtf8("pushButtonOnlineList"));
        pushButtonOnlineList->setGeometry(QRect(20, 110, 120, 40));
        pushButtonOnlineList->setFont(font4);
        pushButtonOnlineList->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonOnlineList->setFocusPolicy(Qt::NoFocus);
        pushButtonOnlineList->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}"));
        lineEditSpeech = new QLineEdit(scrollAreaWidgetContents);
        lineEditSpeech->setObjectName(QString::fromUtf8("lineEditSpeech"));
        lineEditSpeech->setGeometry(QRect(20, 150, 121, 41));
        QFont font5;
        font5.setPointSize(9);
        lineEditSpeech->setFont(font5);
        lineEditSpeech->setCursor(QCursor(Qt::PointingHandCursor));
        lineEditSpeech->setFocusPolicy(Qt::NoFocus);
        lineEditSpeech->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;"));
        lineEditSpeech->setAlignment(Qt::AlignCenter);
        lineEditSpeech->setReadOnly(true);
        pushButtonStart = new QPushButton(scrollAreaWidgetContents);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(50, 210, 51, 21));
        QFont font6;
        font6.setPointSize(8);
        pushButtonStart->setFont(font6);
        pushButtonStart->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonStart->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}\n"
""));
        pushButtonStart->setIconSize(QSize(16, 8));
        labelSpeech = new QLabel(scrollAreaWidgetContents);
        labelSpeech->setObjectName(QString::fromUtf8("labelSpeech"));
        labelSpeech->setGeometry(QRect(20, 210, 21, 16));
        labelSpeech->setStyleSheet(QString::fromUtf8("image: url(:/picture/Speech.png);"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1040, 350, 53, 15));
        stackedWidget->raise();
        widget->raise();
        widget_2->raise();
        scrollArea->raise();
        label_2->raise();

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(4);
        tabWidget->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(4);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonLoop->setText(QString());
        pushButtonLastsong->setText(QString());
        pushButtonPlay->setText(QString());
        pushButtonNextsong->setText(QString());
        pushButtonSound->setText(QString());
        Curlabel->setText(QApplication::translate("Widget", "00:00", nullptr));
        totallabel->setText(QApplication::translate("Widget", "00:00", nullptr));
        pushButtonLyric->setText(QString());
        pushButtondownload->setText(QString());
        pushButtondetails->setText(QString());
        labelSongname->setText(QString());
        pushButtonaddMylove->setText(QString());
        lineEdit->setText(QString());
        pushButtonSearch->setText(QString());
        pushButtonLastpage->setText(QString());
        pushButtonNextpage->setText(QString());
        pushButtoncloth->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\346\216\222\350\241\214\346\246\234", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_5), QApplication::translate("Widget", "\345\215\216\350\257\255", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QApplication::translate("Widget", "\346\254\247\347\276\216", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QApplication::translate("Widget", "\346\227\245\346\234\254", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_12), QApplication::translate("Widget", "\351\237\251\345\233\275", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_11), QApplication::translate("Widget", "\346\270\257\345\217\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\347\203\255\351\227\250\346\255\214\346\211\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Widget", "\350\247\206\351\242\221", nullptr));
        pushButtonMVplay->setText(QString());
        CurlabelMV->setText(QApplication::translate("Widget", "00:00", nullptr));
        totallabelMV->setText(QApplication::translate("Widget", "00:00", nullptr));
        pushButton->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Widget", "MV", nullptr));
        labelMylove->setText(QApplication::translate("Widget", "\346\210\221\345\226\234\346\254\242\347\232\204\351\237\263\344\271\220", nullptr));
        pushButtonPlayall->setText(QApplication::translate("Widget", "\346\222\255\346\224\276\345\205\250\351\203\250", nullptr));
        pushButtonDownload->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\205\250\351\203\250", nullptr));
        labelTotal->setText(QString());
        pushButton_3->setText(QString());
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:6pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"><br /></span></p></body></html>", nullptr));
        labeldetail->setText(QString());
        pushButtonalbum->setText(QString());
        pushButtonPlayallMycreate->setText(QApplication::translate("Widget", "\346\222\255\346\224\276\345\205\250\351\203\250", nullptr));
        pushButtonDownloadMycreate->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\205\250\351\203\250", nullptr));
        labelMycreate->setText(QString());
        pushButton_2->setText(QString());
        pushButtonFindmusic->setText(QApplication::translate("Widget", "\345\217\221\347\216\260\351\237\263\344\271\220", nullptr));
        pushButtonVideo->setText(QApplication::translate("Widget", "\350\247\206\351\242\221", nullptr));
        pushButtonMylove->setText(QApplication::translate("Widget", "\346\210\221\345\226\234\346\254\242", nullptr));
        pushButtonLocalDownload->setText(QApplication::translate("Widget", "\346\234\254\345\234\260\345\222\214\344\270\213\350\275\275", nullptr));
        labelRecommend->setText(QApplication::translate("Widget", "\346\216\250\350\215\220", nullptr));
        labelLocal->setText(QApplication::translate("Widget", "\346\234\254\345\234\260", nullptr));
        label->setText(QApplication::translate("Widget", "\345\210\233\345\273\272\347\232\204\346\255\214\345\215\225", nullptr));
        pushButtonAddmusiclist->setText(QString());
        pushButtonOnlineList->setText(QApplication::translate("Widget", "\346\255\243\345\234\250\346\222\255\346\224\276", nullptr));
        pushButtonStart->setText(QString());
        labelSpeech->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
