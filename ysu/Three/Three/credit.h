#pragma once
#include<iostream>
using namespace std;
#include "card.h"
class credit:public card
{
public:
	credit(string na,string ui,string pw,int mo=0,int typ=0);
	virtual bool withdraw(int money);
	virtual void show();
};