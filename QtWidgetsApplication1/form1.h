#pragma once

#include <QMainWindow>
#include "ui_form1.h"
#include"QtWidgets1.h"

class form1 : public QMainWindow
{
	Q_OBJECT

public:
	form1(QWidget *parent = nullptr);
	~form1();
private slots:
	void get_information();
 signals:
	void send(QString* a);
private:
	Ui::form1Class ui;
};
