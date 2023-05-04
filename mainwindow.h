#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Bckspc_clicked();

    void on_pushButton_Clr_clicked();

    void on_pushButton_Pls_clicked();

    void on_pushButton_Eq_clicked();

    void on_pushButton_Mns_clicked();

    void on_pushButton_Mul_clicked();

    void on_pushButton_Div_clicked();

    void on_pushButton_Pnt_clicked();

    void on_pushButton_Pcnt_clicked();

    void on_pushButton_Sqrt_clicked();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
