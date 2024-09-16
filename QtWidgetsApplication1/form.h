#pragma once

#include <QMainWindow>
#include "ui_form.h"

class form : public QMainWindow
{
	Q_OBJECT

public:
	form(QWidget *parent = nullptr);
	~form();

private:
	Ui::formClass ui;
};
