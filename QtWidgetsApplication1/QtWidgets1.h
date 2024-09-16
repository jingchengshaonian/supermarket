#pragma once

#include <QtWidgets/QMainWindow>
#include"form.h"
#include"form1.h"
#include"from3.h"
#include"sold.h"
#include "ui_QtWidgets1.h"
#include<iostream>
#include<fstream>
#include<string>
#include<QDebug>
#include"classes.h"
#include"warning.h"
#include"back.h"
#include<QTableWidget>
#include<QString>
#include<sstream>

using namespace std;

class QtWidgets1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgets1(QWidget *parent = nullptr);
    ~QtWidgets1();
    void insert(QString*a);
    void Delete(QString a);
    void buy(QString m);
    int check(QString n);
    void back_reason(QString m, QString n);
    int findqstring(QString m);
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
signals:
    void sendwarn1();
    void sendwarn2();
    void sendwarn3();
    void sendwarn4(double n);
    void showbuyorder(int n);
private:
    Ui::QtWidgets1Class ui;
    int num_of_orders;
    int num_of_back;
    double cash;
};