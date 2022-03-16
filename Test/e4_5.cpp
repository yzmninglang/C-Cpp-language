#include<iostream>
using namespace std;
class A{
	public:
		A(int a){
			cout<<"class A"<<" "<<a;
		}
};
class B:virtual public A{
	public:
		B(int a):A(a){
			cout<<"class B "<<a<<endl;
		}
};
class C:virtual public A{
	public:
		C(int a):A(a){
			cout<<"class C "<<a<<endl;
		}
};
class D:public B ,public C{
	public:
		D(int a):A(a),B(a),C(a){
			cout<<"class D "<<a<<endl;
		}
};

int main()
{
	D d1(1);
}
