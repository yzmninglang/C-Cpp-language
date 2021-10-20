#include"sanjixaingmu.h"


void credit::disp(){
	cout<<"name:"<<this->name<<endl
		<<"cid:"<<this->uid<<endl
		<<"money:"<<this->money<<endl
		<<"kind:"<<"credit card"<<endl;
}

void credit::deposit(int m)
{
	this->money+=m;
	cout<<"Success!"<<endl;
}

void debit::disp()
{
	cout<<"name:"<<this->name<<endl
		<<"cid:"<<this->uid<<endl
		<<"money:"<<this->money<<endl
		<<"kind:"<<"debit card"<<endl;
}

void debit::withdraw(int m)
{
	if(this->money<m){
		cout<<"Money too less!";
	}
	else
	{
		cout<<"success!"<<endl;
		this->money-=m;
	}

}

void debit::deposit(int m)
{
	this->money+=m;
	cout<<"Success!"<<endl;
}

void atm::login()
{
	int i =3;
	while (i>0)
	{
		string ui,pw;
		cout<<"Please input uid:";
		cin>>ui;
		cout<<"Please input pw:";
		cin>>pw;
		if(p1->check(ui,pw))
		{
			this->p=p1;
			break;
		}
		else if(ui==this->p2->uid && pw==this->p2->pwd)
		{
			//this->p=p2;
			break;
		}
		else
		{
			cout<<"uid or pwd is wrong!"<<endl
				<<"please try again"<<endl;
			i--;
		}
	}	
}
