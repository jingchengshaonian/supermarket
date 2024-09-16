#include "warning.h"

warning::warning(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

warning::~warning()
{}
void warning::warning1() {
	ui.label->setText("Insufficient stock/goods");//商品不够
}
void warning::warning2() {
	//钱不够
	ui.label->setText("not enough money");
}
void warning::warning3() {
	//没这个商品
	ui.label->setText("There is none such goods");
}
void warning::warning4(double n) {
	ui.label->setText(QString::number(n));
}
void warning::showorder(int n) {
	ifstream file("out.txt");
	if (!file.is_open()) {
		return;
	}
	string line;
	while (getline(file, line)) {
		size_t ptr = line.find(":");
		if (line.substr(0, ptr) == "ID" && stoi(line.substr(ptr + 1)) == n) {
			ui.label->setText(ui.label->text() + QString::fromStdString(line));
			while (getline(file,line)) {
				size_t ptr1 = line.find(":");
				if (line.substr(0, ptr) == "ID") {
					break;
				}
				ui.label->setText(ui.label->text()+"\n" + QString::fromStdString(line));
			}
		}
	}
}
