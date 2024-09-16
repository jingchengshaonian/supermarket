#include "from3.h"

from3::from3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &from3::get_information);
}

from3::~from3()
{}
QString a;
void from3::get_information() {
	a = ui.lineEdit->text();
	emit send(a);
	close();
};