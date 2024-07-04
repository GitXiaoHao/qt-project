#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushBtn_load_clicked();
    void on_pushBtn_locate_clicked();

private:
    Ui::MainWindow *ui;
    QWebEngineView *mapView;
    QWebEnginePage *page;

    QString exePath;
    QString mapPath;
    QDir dir;


};
#endif // MAINWINDOW_H
