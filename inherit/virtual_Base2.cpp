#include<iostream>
using namespace std;
class Base {
	public:
		Base(int sa){
			a = sa;
			cout<<"Constructing Base"<<endl;
		}
	private:
		int a;
};
class Base1:virtual public Base{
	public:
		Base1(int sa ,int sb ):Base(sa){
			b = sb;
			cout<<"Constructing Base1"<<endl;
		}
	private:
		int b;
};

class Base2:virtual public Base{
	public:
		Base2(int sa ,int sc):Base(sa){
			c = sc;
			cout<<"Constructing Base2"<<endl;
		}
	private:
		int c;
};

class Derieve:public Base1,public Base2{
	public:
		Derieve(int sa,int sb ,int sc,int sd):Base(sa),
		Base1(sa,sb),Base2(sa,sc){
			d = sd;
			cout<<"Constructing derieve"<<endl;
		}
	private:
		int d;
};

int main(){
	Derieve obj(2,3,45,4);
	return 0;
}
