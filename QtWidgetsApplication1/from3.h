#pragma once

#include <QMainWindow>
#include "ui_from3.h"
#include"QtWidgets1.h"


class from3 : public QMainWindow
{
	Q_OBJECT

public:
	from3(QWidget *parent = nullptr);
	~from3();
private slots:
	void get_information();
signals:
	void send(QString a);
private:
	Ui::from3Class ui;
};
