#include "back.h"

back::back(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

back::~back()
{}
void back::on_pushButton_clicked() {
	QString m = ui.lineEdit->text();
	QString n = ui.lineEdit_2->text();
	emit send(m,n);
	close();
}
