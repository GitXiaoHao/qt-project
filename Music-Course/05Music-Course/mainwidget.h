#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPainter>
#include<QMenu>
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>
#include<QListWidgetItem>
#include <QNetworkAccessManager>

QT_BEGIN_NAMESPACE
namespace Ui { class mainWidget; }
QT_END_NAMESPACE

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = nullptr);
    ~mainWidget();

private slots:
    void on_btn_Title_clicked();

    void on_btn_About_clicked();

    void on_btn_Skin_clicked();

    void on_btn_Min_clicked();

    void on_btn_Close_clicked();

    void on_btn_CurrentMusic_clicked();

    void on_btn_LocalMusic_clicked();

    void on_btn_FavorMusic_clicked();

    void on_btn_Pre_clicked();

    void on_btn_play_clicked();

    void on_btn_Next_clicked();

    void on_btn_PlayMode_clicked();

    void on_btn_AddMusic_clicked();//添加音频文件

    void on_btn_Voice_clicked();

    void background_to_default();//切换到默认皮肤
    void background_setting();//切换到自定义皮肤

    void on_listWidget_localMusic_itemDoubleClicked(QListWidgetItem *item);//播放列表双击来播放音乐
    void onDurationChanged(qint64 duration); //文件时长变化，更新当前播放文件名显示；duration为播放文件数据总大小的信号， 它可以获得文件时间长度。
    void onPositionChanged(qint64 position); //当前文件播放位置变化，更新进度显示；position为播放到什么位置的信号， 参数是以毫秒来计算的。
    void on_PositionSlider_valueChanged(int value);

    void on_VolumeSlider_valueChanged(int value);

    void on_PositionSlider_sliderReleased();
    void initSearch();//初始化在线搜索
    void search();//在线搜索
    void on_tableWidget_cellDoubleClicked(int row, int column);//双击播放在线搜索中歌曲播放歌曲

private:
    Ui::mainWidget *ui;
    QMenu *menu_changeSkin;     //更换皮肤的菜单
    QMediaPlayer * player;
    QMediaPlaylist * playlist;
    QString durationTime;
    QString positionTime;
    int M_Amount=0;//用来记录文件总数
    int M_Value=0;//当前播放的文件标记
    void init_Actions();//初始化菜单项
    void init_Settings();//初始化配置
    void init_Sql();//数据库初始化
    void insertSql(const QString& name);//存入数据库
    void read_fromSQL();//从数据中恢复本歌单
    void paintEvent(QPaintEvent *event) override;//绘制重写事件
    QNetworkAccessManager *NAM;

    //歌曲资源地址
    QUrl url;
    //歌手
    QString author;
    //歌曲名
    QString title;
    //时长
    qint64 duration;
    //唱片集
    QString albumTitle;
    //比特率
    int audioBitRate;
};
#endif // MAINWIDGET_H
