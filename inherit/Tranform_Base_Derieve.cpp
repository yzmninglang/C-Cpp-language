#include<iostream>
using namespace std;
class Base{
	public:
		int i ;
		Base(int x){
			i =x;
		}
		void show(){
			cout<<"Base"<<i<<endl;
		}
};

class Derieve:public Base{
	public:
		Derieve(int x):Base(x){
		}
};
void fun(Base &b){
	cout<<b.i<<endl;
}
void fun1(Derieve &c){
	cout<<c.i<<endl;
}
void fun2(Base *p){
	cout<<"P:"<<p->i<<endl;
}
int main(){
	Base b1(100);
	b1.show();
	Derieve b2(200);
	b2.show();
	Base *b3 = &b2;
//	b1 = b2;
	fun(b2);
	fun1(b2);
	fun2(b3);
	return 0;
}
