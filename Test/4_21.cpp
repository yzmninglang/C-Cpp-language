#include<iostream>
using namespace std;
class btime{
	public:
		btime(int h,int m,int s){
			hours= h;
			minutes=m;
			seconds =s;
		}
		void display(){
			cout<<"hours:"<<hours<<" minutes:"<<minutes<<" seconds:"<<seconds;
		}
	protected:
		int hours,minutes,seconds;
};
class Date{
	public:
		Date(int y,int m,int d){
			year = y;
			month= m;
			day = d;
		}
		void display(){
		cout<<"year:"<<year<<" month:"<<month<<" day:"<<day<<endl;
	}
	protected:
		int year,month,day;
};
class BT:public Date,btime
{
	public:
		BT(string n,int y,int m,int d,int h,int m1,int s):Date(y,m,d),btime(h,m1,s)
		{
			name = n;
		}
	void dis()
	{
		cout<<name<<endl;
		Date::display();
		btime::display();
	}
	protected:
		string name;
};

int main()
{
	BT b1("yuzhimin",2020,1,21,23,21,12);
	b1.dis();
}
