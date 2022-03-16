#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"class A constructing"<<endl;
		}
		~A(){
			cout<<"class A"<<endl;
		}
};
class C{
	public:
	C()
	{
		cout<<"class C constructing"<<endl;
	}
	~C(){
		cout<<"class C deconstructing"<<endl;
	}
};
class B:public A{
	public:
		B():a(),c()
		{
			cout<<"class B constructing"<<endl;
		}
		~B(){
			cout<<"class B"<<endl;
		}
	private:
		A a;
		C c;
};

int main()
{
	B b1;
//	A *b2=new B;
//	delete b2;
	return 0;
}
