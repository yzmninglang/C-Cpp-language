#include "card.h"
#include<iostream>
using namespace std;
card::card(string na,string ui,string pw,int mo,int typ)
{
	this->name=na;
	this->uid=ui;
	this->pwd=pw;
	this->type=typ;
	this->money=mo;
}
void card::changepwd(string np)
{
	this->pwd=np;

}
bool card::trans(int money)
{

	return true;
}
void card::show()
{
	cout<<this->name<<""<<this->uid<<this->type;
}
void card::despoit(int money)
{
	this->money+=money;
}