#include<iostream>
using namespace std;
class A{
	public:
		void print(){
			cout<<"1,2,3";
		}
};
class B:public A{
	public:
		void print1(){
			cout<<"456";
		}
};

int main(){
	A *ptr;
	B a1;
	ptr =&a1;
	ptr->print1();   //can't call
	return 0;
}
