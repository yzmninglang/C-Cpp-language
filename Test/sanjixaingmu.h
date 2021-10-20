#include<iostream>
using namespace std;
#include <string> 
class atm;
class card{
	protected:
		string name,uid,pwd;
		int kind,money;
	public:
		friend atm;
		friend 
		card(string n1,string u1,string p1,int m1,int k1):name(n1),uid(u1),pwd(p1),money(m1),kind(k1){};
		virtual void disp()=0;
		virtual void withdraw(int m)=0;
		virtual void deposit(int x)=0;
	
};

class credit:public card{
	public:
		//friend Atm;
		credit(string n1,string u1,string p1,int m1=0,int k1=0):card(n1,u1,p1,m1,k1){};
		void disp();
		void withdraw(int m);
		void deposit(int x);	
};



class debit:public card
{
public:
	friend atm;
	debit(string n1,string u1,string p1,int m1=0,int k1=1):card(n1,u1,p1,m1,k1){};
	void disp();
	void withdraw(int m); 
	void deposit(int x);
};


class atm
{
	public:
		atm(){
			p1=new credit("yuzhimin","1234","1234",100);
			p2=new debit("yuzhimin","12345","12345",100);
		}
		void login();
		void menu();
		void tran();
	protected:
		credit *p1;
		debit *p2;
		card *p;
};




