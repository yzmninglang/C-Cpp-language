#include<iostream>
using namespace std;
class Base{
	public:
		virtual void fun(){
			cout<<"This is Base!\n";
		}
};

class Base1{
	public:
		void fun(){
			cout<<"This is Base1\n";
		}
};

class Base2:public Base ,public Base1{
	public:
		virtual void fun(){
			cout<<"This is Base2\n";
		}
};

int main(){
	Base *ptr1;
	Base1 *ptr2;
	Base2 obj;
	ptr1 = &obj;
	ptr2 = &obj;
	ptr1->fun();
	ptr2->fun();
	obj.fun();
	return 0;
	
}
