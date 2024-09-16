#include "form1.h"

form1::form1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &form1::get_information);
}

form1::~form1()
{
	delete& ui;
}
QString* aaa = new QString[7];
void form1::get_information() {
	aaa[0] = ui.lineEdit->text();
	aaa[1] = ui.lineEdit_7->text();
	aaa[2] = ui.lineEdit_8->text();
	aaa[3] = ui.lineEdit_9->text();
	aaa[4] = ui.lineEdit_12->text();
	aaa[5] = ui.lineEdit_10->text();
	aaa[6] = ui.lineEdit_11->text();
	emit send(aaa);
	close();
}
