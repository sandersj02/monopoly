#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnStart_clicked();

    void on_btnRoll_clicked();

    void on_btnProperties_clicked();

    void on_btnGame_clicked();

    void on_gbBoard_clicked();

    void on_btnEnd_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
