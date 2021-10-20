#pragma once
#include<iostream>
using namespace std;
#include "card.h"
class debit:public card
{
public:
	debit(string na,string ui,string pw,int mo =0,int typ=1);
	bool  withdraw(int money);

};