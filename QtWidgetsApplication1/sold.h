#pragma once

#include <QMainWindow>
#include "ui_sold.h"
#include"QtWidgets1.h"

class sold : public QMainWindow
{
	Q_OBJECT

public:
	sold(QWidget *parent = nullptr);
	~sold();
private slots:
	void on_pushButton_clicked();
signals:
	void send(QString m);
private:
	Ui::soldClass ui;
};
