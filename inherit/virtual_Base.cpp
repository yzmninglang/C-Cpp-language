#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			a = 5;
			cout<<"a="<<a<<endl;
		}
	protected:
		int a;
};

class Base1:virtual public Base{
	public:
		Base1(){
			a = a+10;
			cout<<"Base1 "<<a<<endl;
		}
};

class Base2:virtual public Base{
	public:
		Base2(){
			a = a+20;
			cout<<"Base2 "<<a<<endl;
		}
};

class Base3:public Base1 ,public Base2{
	public:
		Base3(){
			cout<<"Base3 "<<a<<endl;
		}
};

int main(){
	Base3 b;
	return 0;
}
