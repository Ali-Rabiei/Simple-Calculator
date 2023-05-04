#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <string>
#include <cmath>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Memory

float sumMemory = 0;
float subtractMemory = 0;
float productMemory = 0;
float divideMemory = 0;
float percentMemory = 0;
float rootMemory = 0;


// Numbers

void MainWindow::on_pushButton_1_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("1");
    else
        ui->label->setText(ui->label->text() + "1");
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("2");
    else
        ui->label->setText(ui->label->text() + "2");
}

void MainWindow::on_pushButton_3_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("3");
    else
        ui->label->setText(ui->label->text() + "3");
}

void MainWindow::on_pushButton_4_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("4");
    else
        ui->label->setText(ui->label->text() + "4");
}

void MainWindow::on_pushButton_5_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("5");
    else
        ui->label->setText(ui->label->text() + "5");
}

void MainWindow::on_pushButton_6_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("6");
    else
        ui->label->setText(ui->label->text() + "6");
}

void MainWindow::on_pushButton_7_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("7");
    else
        ui->label->setText(ui->label->text() + "7");
}

void MainWindow::on_pushButton_8_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("8");
    else
        ui->label->setText(ui->label->text() + "8");
}

void MainWindow::on_pushButton_9_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("9");
    else
        ui->label->setText(ui->label->text() + "9");
}


void MainWindow::on_pushButton_0_clicked()
{
    if (ui->label->text() != "0")
        ui->label->setText(ui->label->text() + "0");
}

void MainWindow::on_pushButton_Pnt_clicked()
{
    string str = (ui->label->text()).toStdString();
    char lastChar = str.back();

    if (ui->label->text() == "0")
        ui->label->setText("0.");
    else if (lastChar == '.')
    {
        ui->label->setText(ui->label->text() + "");
    }
    else
        ui->label->setText(ui->label->text() + ".");
}


// Keys

void MainWindow::on_pushButton_Bckspc_clicked()
{
    string str = (ui->label->text()).toStdString();
    str.pop_back();
    QString qst = QString::fromStdString(str);

    if (ui->label->text().length() == 1 || ui->label->text() == "0")
        ui->label->setText("0");
    else
        ui->label->setText(qst);
}


void MainWindow::on_pushButton_Clr_clicked()
{
    if (ui->label->text() != "0")
        ui->label->setText("0");
    ui->label_2->setText("");
}


// Operators

void MainWindow::on_pushButton_Eq_clicked()
{
    if (sumMemory != 0)
    {
        QString s1 = QString::number(sumMemory);
        ui->label_2->setText(s1 + " + " + ui->label->text() + " =");
        QString a = ui->label->text();
        sumMemory += a.toFloat();
        QString s2 = QString::number(sumMemory);
        ui->label->setText(s2);
        sumMemory = 0;
    }
    else if (subtractMemory != 0)
    {
        QString s1 = QString::number(subtractMemory);
        ui->label_2->setText(s1 + " - " + ui->label->text() + " =");
        QString a = ui->label->text();
        subtractMemory -= a.toFloat();
        QString s2 = QString::number(subtractMemory);
        ui->label->setText(s2);
        subtractMemory = 0;
    }
    else if (productMemory != 0)
    {
        QString s1 = QString::number(productMemory);
        ui->label_2->setText(s1 + " × " + ui->label->text() + " =");
        QString a = ui->label->text();
        productMemory *= a.toFloat();
        QString s2 = QString::number(productMemory);
        ui->label->setText(s2);
        productMemory = 0;
    }
    else if (divideMemory != 0)
    {
        QString s1 = QString::number(divideMemory);
        ui->label_2->setText(s1 + " ÷ " + ui->label->text() + " =");
        QString a = ui->label->text();
        divideMemory /= a.toFloat();
        QString s2 = QString::number(divideMemory);
        ui->label->setText(s2);
        divideMemory = 0;
    }
    else if (percentMemory != 0)
    {
        QString s1 = QString::number(percentMemory);
        ui->label_2->setText(s1 + "% =");
        percentMemory /= 100;
        QString s2 = QString::number(percentMemory);
        ui->label->setText(s2);
        percentMemory = 0;
    }
    else if (rootMemory != 0)
    {
        QString s1 = QString::number(rootMemory);
        ui->label_2->setText("√" + s1 + " =");
        rootMemory = sqrt(rootMemory);
        QString s2 = QString::number(rootMemory);
        ui->label->setText(s2);
        rootMemory = 0;
    }
}

void MainWindow::on_pushButton_Pls_clicked()
{
    QString a = ui->label->text();
    ui->label_2->setText(ui->label->text() + " + ");
    sumMemory += a.toFloat();
    ui->label->setText("0");
}

void MainWindow::on_pushButton_Mns_clicked()
{
    if (ui->label->text() == "0")
        ui->label->setText("-");
    else
    {
        QString a = ui->label->text();
        subtractMemory = a.toFloat();
        ui->label_2->setText(ui->label->text() + " - ");
        ui->label->setText("0");
    }
}


void MainWindow::on_pushButton_Mul_clicked()
{
    QString a = ui->label->text();
    productMemory = a.toFloat();
    ui->label_2->setText(ui->label->text() + " × ");
    ui->label->setText("0");
}


void MainWindow::on_pushButton_Div_clicked()
{
    QString a = ui->label->text();
    divideMemory = a.toFloat();
    ui->label_2->setText(ui->label->text() + " ÷ ");
    ui->label->setText("0");
}


void MainWindow::on_pushButton_Pcnt_clicked()
{
    QString a = ui->label->text();
    percentMemory = a.toFloat();
    ui->label_2->setText(ui->label->text() + "%");
    ui->label->setText("0");
}


void MainWindow::on_pushButton_Sqrt_clicked()
{
    QString a = ui->label->text();
    rootMemory = a.toFloat();
    ui->label_2->setText("√" + ui->label->text());
    ui->label->setText("0");
}

// Menu

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msg;
    msg.setText("Simple Calculator by Ali Rabiei\n\nVersion 1.0\nDate: May 4, 2023");
    msg.exec();
}

// End
