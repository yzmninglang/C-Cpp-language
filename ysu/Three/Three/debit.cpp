#include "debit.h"
debit::debit(string na,string ui,string pw,int mo,int typ):card(na,ui,pw,mo,typ)
{


}
bool debit::withdraw(int money)
{
	if(money>this->money)
	{
		return false;
	}
	this->money-=money;
	return true;
}

void debit::show()
{
	cout<<"debit\n";

}