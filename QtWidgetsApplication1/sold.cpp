#include "sold.h"

sold::sold(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

sold::~sold()
{}
void sold::on_pushButton_clicked() {
    QString m = ui.lineEdit->text();
    emit send(m);
	close();
}
