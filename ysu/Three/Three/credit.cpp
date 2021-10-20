#include "credit.h"
credit::credit(string na,string ui,string pw,int mo,int typ):card(na,ui,pw,mo,typ)
{


}
bool credit::withdraw(int money)
{
	this->money-=money;
	return true;
}