#include<iostream>
using namespace std;
class A{
	public:
		~A(){
			cout<<"class A"<<endl;
		}
};
class B:public A{
	public:
		~B(){
			cout<<"class B"<<endl;
		}
};

int main()
{
	//B b1;
	A *b2=new B;
	delete b2;
	return 0;
}
