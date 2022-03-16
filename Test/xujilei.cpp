#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"wo shi base"<<endl;
		}
        ~A()
        {
            cout<<"xigou_A"<<endl;
        }
};
class B:public A{
	public:
		B(){
			cout<<"wo shi B"<<endl;
		}
		~B()
		{
			cout<<"xigou_B"<<endl;
		}
};
class C:virtual public A{
	public:
		C()
		{
			cout<<"wo shi C"<<endl;
		}
		c1()
		{
			
		}
};
class D:public B,public C
{
	public:
		D()
		{
			cout<<"wo shi D"<<endl;
		}
};
int main()
{
	A *p = new B;
	delete p;
}
