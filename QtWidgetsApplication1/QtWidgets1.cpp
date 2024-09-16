#include "QtWidgets1.h"


QtWidgets1::QtWidgets1(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    num_of_orders = 1;
    num_of_back = 1;
}

QtWidgets1::~QtWidgets1()
{}
int QtWidgets1::findqstring(QString m) {
    for (int i = 0; i < ui.tableWidget_2->rowCount(); i++) {
        if (m == ui.tableWidget_2->item(i, 0)->text()) {
            return i;
        }
    }
}
void QtWidgets1::on_pushButton_5_clicked() {
    form *w = new form;
    w->show();
}
void QtWidgets1::on_pushButton_10_clicked() {
//初始化
    //获取信息
    ifstream file("market_in.txt");
    if (!file.is_open()) {
        ui.tableWidget_2->setItem(0, 0, new QTableWidgetItem("nothing"));
        return;
    }
    string line;
    int row = 0;
    while (getline(file, line)) {
        size_t ptr = line.find(":");
        if (ptr !=string::npos) {
            string first = line.substr(0, ptr);
            string second = line.substr(ptr + 2);
            if (first == "Cash") {
                ui.textEdit->setText(QString::fromStdString(second));
                cash = stod(second);
            }
            if (second == "food") {
                QString information[5];
                for (int i = 0; i < 5; i++) {
                    getline(file, line);
                    size_t ptr = line.find(":");
                    information[i] =QString::fromStdString(line.substr(ptr + 2));
                }
                for (int i = 0; i < 5; i++) {
                    ui.tableWidget_2->setItem(row, i, new QTableWidgetItem(information[i]));
                }
                row++;
            }
            else if (second == "DailyGoods") {
                QString information[4];
                for (int i = 0; i < 4; i++) {
                    getline(file, line);
                    size_t ptr = line.find(":");
                    information[i] = QString::fromStdString(line.substr(ptr + 2));
                }
                int a[4] = { 1,2,3,5 };
                for (int i = 0; i < 4; i++) {
                    ui.tableWidget_2->setItem(row, a[i]-1, new QTableWidgetItem(information[i]));
                }
                row++;
            }
            else if (second == "ElectricalAppliance") {
                QString information[5];
                for (int i = 0; i < 5; i++) {
                    getline(file, line);
                    size_t ptr = line.find(":");
                    information[i] = QString::fromStdString(line.substr(ptr + 2));
                }
                int a[5] = { 1,2,3,6,7 };
                for (int i = 0; i < 5; i++) {
                    ui.tableWidget_2->setItem(row, a[i]-1, new QTableWidgetItem(information[i]));
                }
                row++;
            }
        }
    }
    file.close();
};
void QtWidgets1::insert(QString* a) {
    int n = ui.tableWidget_2->rowCount();
    ui.tableWidget_2->insertRow(n);
    for (int i = 0; i < 7; i++) {
        ui.tableWidget_2->setItem(n, i, new QTableWidgetItem(a[i]));
    }
}
void QtWidgets1::on_pushButton_2_clicked() {
    form1* w = new form1;
    w->show();
//增加商品
    connect(w, &form1::send, this, &QtWidgets1::insert);
};
void QtWidgets1::Delete(QString a) {
    int i = QtWidgets1::findqstring(a);
    ui.tableWidget_2->removeRow(i);
    //int n = ui.tableWidget_2->rowCount();
    //for (int i = 0; i < n; i++) {
    //    if (ui.tableWidget_2->item(i, 0)->text() == a) {
    //        ui.tableWidget_2->removeRow(i);
    //        break;
    //    }
    //}
}
void QtWidgets1::on_pushButton_3_clicked() {
    from3* w = new from3;
    connect(w, &from3::send, this, &QtWidgets1::Delete);
    w->show();
//删除商品
};
void QtWidgets1::on_pushButton_4_clicked() {
    //图片扫描
};
//void QtWidgets1::sendwarn1() {}
//void QtWidgets1::sendwarn3() {}
int QtWidgets1::check(QString n) {
    string m = n.toStdString();
    vector<string> things;
    size_t ptr ;
    while ((ptr = m.find("+") )!= string::npos) {
        string thing1 = m.substr(0, ptr);
        if (ptr < m.size()) {
            m = m.substr(ptr + 1);
        }
        else {
            break;
        }
        things.push_back(thing1);
    }
    things.push_back(m);
    int num = ui.tableWidget_2->rowCount();
    QString* a = new QString[num];
    for (int j = 0; j < num; j++) {
        a[j] = ui.tableWidget_2->item(j, 0)->text();
    }
    for (int i = 0; i < things.size(); i++) {
        size_t ptr = things[i].find("*");
        string number = things[i].substr(0, ptr);
        string name = things[i].substr(ptr + 1);
        int j;
        for ( j = 0; j < num; j++) {
            if (QString::fromStdString(name) == a[j]&&
                stoi(number) <= ui.tableWidget_2->item(j, 1)->text().toInt()) {
                break;
            }
            else if (QString::fromStdString(name) == a[j] &&
                stoi(number) > ui.tableWidget_2->item(j, 1)->text().toInt()) {
                return 2;
            }
        }
        if (j == num) {
            return 0;
        }
    }
    return 1;
}
void QtWidgets1::buy(QString m) {
    int ok = check(m);
    if (ok==1) {
        string n = m.QString::toStdString();
        buyorder example(this->num_of_orders, n);
        for (int j = 0; j < example.size(); j++) {
            for (int i = 0; i < ui.tableWidget_2->rowCount(); i++) {
                if (ui.tableWidget_2->item(i, 4) != NULL) {
                    example.compare(ui.tableWidget_2->item(i, 0)->text().toStdString(),
                    ui.tableWidget_2->item(i, 4)->text().toDouble());
                }
            }
        }
        double money = example.sum();
        QString cash = ui.textEdit->toPlainText();
        double cash1 = cash.toDouble();
        if (cash1 >= money) {
            cout<<example;
            ui.textEdit->setText(QString::number(cash1 - money));
            for (int i = 0; i < ui.tableWidget_2->rowCount(); i++) {
                QString m = ui.tableWidget_2->item(i, 0)->text();
                double number = example.compare1(m.toStdString());
                if (number != -1) {
                    int number1 = ui.tableWidget_2->item(i, 1)->text().toDouble();
                    ui.tableWidget_2->setItem(i, 1, new QTableWidgetItem(QString::number(number1 - number)));
                }

            }
            num_of_orders++;
            warning* w = new warning;
            connect(this, &QtWidgets1::showbuyorder, w, &warning::showorder);
            emit showbuyorder(num_of_orders-1);
            w->show();
        }
        else {
            warning* w = new warning;
            connect(this, &QtWidgets1::sendwarn2, w, &warning::warning2);
            emit sendwarn2();
            w->show();
        }
    }
    else if(ok==0){
        warning* w = new warning;
        connect(this, &QtWidgets1::sendwarn3, w, &warning::warning3);
        emit sendwarn3();
        w->show();//没这个商品
    }
    else if (ok == 2) {
        warning* w = new warning;
        connect(this, &QtWidgets1::sendwarn1, w, &warning::warning1);
        emit sendwarn1();
        w->show();//商品不够
    }
}
void QtWidgets1::on_pushButton_6_clicked() {
//卖出商品
    sold* w = new sold;
    w->show();
    connect(w, &sold::send, this, &QtWidgets1::buy);
};
void QtWidgets1::back_reason(QString m,QString n) {
    ifstream file("out.txt");
    if (!file.is_open()) {
        return;
    }
    string line;
    int row = 0;
    int id = m.toInt();
    while (getline(file, line)) {
        size_t ptr = line.find(":");
        if ("ID" == line.substr(0, ptr)) {
            if (id == stoi(line.substr(ptr + 1))) {
                ofstream* file1 = nullptr;
                if (this->num_of_back == 1) {
                    file1 = new ofstream("back.txt");
                }
                else {
                    file1 = new ofstream("back.txt", ios::app);
                }
                if (!(*file1).is_open()) {
                    return;
                }
                *file1 << line<<endl;
                string name;
                while (getline(file,line)) {
                    size_t ptr1 = line.find(":");
                    if ("ID" == line.substr(0, ptr)||(ptr==string::npos)) {
                        break;
                    }
                    else if (line.substr(0, ptr1) == "name") {
                        name = line.substr(ptr1 + 2);
                    }
                    else if (line.substr(0, ptr1) == "num") {
                        int i = QtWidgets1::findqstring(QString::fromStdString(name));
                        int number1 = ui.tableWidget_2->item(i, 1)->text().toDouble();
                        int number = stoi(line.substr(ptr1 + 2));
                        ui.tableWidget_2->setItem(i, 1, new QTableWidgetItem(QString::number(number1 + number)));
                        //for (int i = 0; i < ui.tableWidget_2->rowCount(); i++) {
                        //    QString m = ui.tableWidget_2->item(i, 0)->text();
                        //    if (m.toStdString() == name) {
                        //        int number1 = ui.tableWidget_2->item(i, 1)->text().toDouble();
                        //        int number = stoi(line.substr(ptr1 + 2));
                        //        ui.tableWidget_2->setItem(i, 1, new QTableWidgetItem(QString::number(number1 + number)));
                        //    }
                        //}
                    }
                    *file1 << line << endl;
                }
                *file1 << "reason:" << n.toStdString()<<endl;
                num_of_back++;
            }
        }
    }
}
void QtWidgets1::on_pushButton_7_clicked() {
    //退回商品
    back* w = new back;
    w->show();
    connect(w, &back::send, this, &QtWidgets1::back_reason);
};
void QtWidgets1::on_pushButton_8_clicked() {
    ofstream file("save.txt");
    int a[3] = { 1,2,5 };
    string m[3] = { "name: ","num: ","price: " };
    for (int i = 0; i < ui.tableWidget_2->rowCount(); i++) {
        for (int j = 0; j < 3; j++) {
            file << m[j];
            if (ui.tableWidget_2->item(i, a[j] - 1) != NULL) {
                file << ui.tableWidget_2->item(i, a[j] - 1)->text().toStdString();
            }
            file << endl;
        }
    }
    //保存信息
};
void QtWidgets1::on_pushButton_9_clicked() {
    warning* test = new warning;
    double n = ui.textEdit->toPlainText().toDouble();
    //计算营业额
    connect(this, &QtWidgets1::sendwarn4, test, &warning::warning4);
    emit sendwarn4(cash-n);
    test->show();
};
//void QtWidgets1::showbuyorder() {}