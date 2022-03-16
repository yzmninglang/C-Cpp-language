#include<iostream>
using namespace std;
class base{
	public:
		app()
		{
			cout<<"base";
		}
};
class de:public base{
	public:
		app(int q)
		{
			cout<<"de";
		}
};
int main()
{
	base *p;
	p=new de;
	p->app(2); 
}
