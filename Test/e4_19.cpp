#include<iostream>
using namespace std;
class A{
	public:
		A(int i){
		}
};

class B:public A{
	public:
		B(int i):A(i){
		}
};
int main()
{
//	A a(5);
	B b(1);
	A *a;
	a=&b;
}
