#include<iostream>
using namespace std;
class A
{
	public:
		A(){
			cout<<"woshi A"<<endl;
		}
		virtual ~A()
		{
			cout<<"woshi a"<<endl;
		}
	private:

		App(){
			cout<<"pig"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"woshi B"<<endl;
		}
		App(){
			cout<<"fish"<<endl;
		}
		virtual ~B()
		{
			cout<<"woshi b"<<endl;
		}
		
};
int main()
{
	A *a=new B;
	delete a;
//	B b;
//	b.App();
//	b.App(2);
//	b.A::App();
//	A a=b;
//	a.App();
}
