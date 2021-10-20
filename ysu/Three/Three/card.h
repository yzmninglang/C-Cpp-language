#pragma once
#include<iostream>
using namespace std;
#include<string>
class atm;
class card{
public:
	friend atm;
	card(string na,string ui,string pw,int mo,int typ);
	//virtual void showMenu();
	void changepwd(string newpw);
	void show();
	void despoit(int money);
	bool trans(int money);
protected:
	string name, uid, pwd;
	int type,money,lock;
};