#include<iostream>
using namespace std;
class person{
	public:
		person(string n1 ,int n)
		{
			name = n1;
			no=n;
		}
		virtual void dis()=0;
	protected:
		string name;
		int no;
};

class student:public person{
	public:
		student(string n1 ,int n,int ni,double s):person(n1,n)
		{
			nian=ni;
			score=s;
		}
		virtual void dis();
	protected:
		//string name;
		int nian;
		double score;
};

class teacher:public person{
	public:
		teacher(string n1,int n,string pro,string de):person(n1,n){
			profile=pro;
			dep=de;
		}
		virtual void dis();
	protected:
		string profile;
		string dep;
};

void student::dis()
{
	cout<<"name:"<<name<<" No:"<<no<<" nianji:"<<nian<<" score:"<<score<<endl;
}
void teacher::dis()
{
	cout<<"name:"<<name<<" No:"<<no<<" profile:"<<profile<<" department:"<<dep<<endl;
}

int main()
{
	student a("yuzhimin",1,2,21);
	teacher b("zhangtuo",21,"laoshi","math");
//	a.dis();
//	b.dis();
	person *p;
	p=&a;
	p->dis();
	p=&b;
	p->dis();
}
