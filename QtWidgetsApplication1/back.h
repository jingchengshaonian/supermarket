#pragma once

#include <QMainWindow>
#include "ui_back.h"

class back : public QMainWindow
{
	Q_OBJECT

public:
	back(QWidget *parent = nullptr);
	~back();

signals:
	void send(QString m,QString n);

private slots:
	void on_pushButton_clicked();
private:
	Ui::backClass ui;
};
