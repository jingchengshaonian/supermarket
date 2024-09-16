#pragma once
#include<iostream>
#include<cstring>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
class supermarket {
private:
	string name;
	int cash;
public:

};
class goods {
protected:
	string name;
	string date;
	int quantity;
public:
	virtual void show()=0;
};
class dailygoods :public goods
{
public :
	void show();

};
class food : public goods
{
private:
	int guarantee_period;
public:
	void show();

};
class electricalappliance : public goods
{
private:
	string color;
	string maintenance_period;
public:
	void show();
};
struct order {
	string name;
	int num;
	double price;
	double sum;
};
class orders {
protected:
	int ID;
	string date;
	vector<order> goods;
public:
	orders(int n);
};
class buyorder : public orders
{
public:
	buyorder(int n,string m);
	double sum();
	void printtxt();
	int size();
	void compare(string m,double price1);
	int compare1(string m);
	void operator+(string m);
	void operator*(string m);
};
class backorder : public orders
{

};
ostream& operator << (ostream& cout, buyorder& m);
istream& operator>>(istream& cin, buyorder& m);