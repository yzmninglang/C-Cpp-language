#include<iostream>
using namespace std;
class Base{
	public:
		void func4(){
			cout<<"nihao";
		}
};

class Derived:public Base{
	public:
		void func4(){
			cout<<" nihao!";
		}
};

int main(){
	Base d1,*bp;
	Derived d2,*bp1;
	bp=&d2;
	bp1=&d2;
//	bp1->func4();
	bp->func4();
}
