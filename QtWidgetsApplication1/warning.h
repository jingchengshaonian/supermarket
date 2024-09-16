#pragma once

#include <QMainWindow>
#include "ui_warning.h"
#include"QtWidgets1.h"

class warning : public QMainWindow
{
	Q_OBJECT

public:
	warning(QWidget *parent = nullptr);
	~warning();
public slots:
	void warning1();
	void warning2();
	void warning3();
	void warning4(double n);
	void showorder(int n);


private:
	Ui::warningClass ui;
};
