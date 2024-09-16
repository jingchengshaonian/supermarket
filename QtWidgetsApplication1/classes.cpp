#include "classes.h"
orders::orders(int n) {
	this->ID = n;
}
buyorder::buyorder(int n,string m):orders(n) {
	*this + m;
	//vector<string> things;
	//size_t ptr;
	//while ((ptr = m.find("+")) != string::npos) {
	//	string thing1 = m.substr(0, ptr);
	//	if (ptr < m.size()) {
	//		m = m.substr(ptr + 1);
	//	}
	//	else {
	//		break;
	//	}
	//	things.push_back(thing1);
	//}
	//things.push_back(m);
	//for (int i = 0; i < things.size(); i++) {
	//	ptr = things[i].find('*');
	//	order example;
	//	example.num = stoi(things[i].substr(0,ptr));
	//	example.name = things[i].substr(ptr + 1);
	//	goods.push_back(example);
	//}
}
int buyorder::size() {
	return this->goods.size();
}
int buyorder::compare1(string m) {
	for (int i = 0; i < this->size(); i++) {
		if (this->goods[i].name == m) {
			return goods[i].num;
		}
	}
	return -1;
}
void buyorder::compare(string m,double price1) {
	for (int i = 0; i < this->size(); i++) {
		if (this->goods[i].name == m) {
			this->goods[i].price = price1;
			this->goods[i].sum = this->goods[i].num * price1;
		}
	}
}
double buyorder::sum() {
	double money = 0;
	for (int i = 0; i < goods.size(); i++) {
		money += goods[i].sum;
	}
	return money;
}
void buyorder::printtxt() {
	ofstream* file=nullptr;
	if (this->ID == 1) {
		file=new ofstream("out.txt");
	}
	else {
		file = new ofstream("out.txt",ios::app);
	}

	if (file->is_open()) {
		*(file) << "ID: " << this->ID<<endl;
		*(file) << "date: " << this->date<<endl;
		for (int i = 0; i < goods.size(); i++) {
			*(file) << "name: " << this->goods[i].name<<endl;
			*(file) << "num: " << this->goods[i].num<<endl;
			*(file) << "price: " << this->goods[i].price<<endl;
			*(file) << "sum: " << this->goods[i].sum<<endl;
		}
	}
	file->close();
	return ;
}
void dailygoods::show() {
	cout << name << endl;
	cout << date << endl;
	cout << quantity << endl;
}
void food::show() {
	cout << name << endl;
	cout << date << endl;
	cout << quantity << endl;
	cout << guarantee_period << endl;
}
void electricalappliance::show() {
	cout << name << endl;
	cout << date << endl;
	cout << quantity << endl;
	cout << color << endl;
	cout << maintenance_period << endl;
}
void buyorder::operator+(string m) {
	vector<string> things;
	size_t ptr;
	while ((ptr = m.find("+")) != string::npos) {
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
	for (int i = 0; i < things.size(); i++) {
		*this *things[i];
	}

}
void buyorder::operator*(string m) {
	size_t ptr = m.find('*');
	order example;
	example.num = stoi(m.substr(0, ptr));
	example.name = m.substr(ptr + 1);
	this->goods.push_back(example);
}
ostream& operator<<(ostream &cout, buyorder &m) {
	m.printtxt();
	return cout;
}
istream& operator>>(istream& cin, buyorder& m) {
	return cin;
}