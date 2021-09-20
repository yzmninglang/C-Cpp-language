#include<iostream>
using namespace std;
class X{
	public:
		void setX(int x){
			a=x;
		}
		void show(){
			cout<<"a="<<a<<endl;
		}
	private:
		int a;
};
class Y{
	public:
		void sety(int y){
			b = y;
		}
		void show(){
			cout<<"b="<<b<<endl;
		}
	private:
		int b;
};

class Z:public X,private Y{
	public:
		void setz(int x,int y){
			c = x;
			sety(y);
		}
		void showz(){
			cout<<"z="<<c<<endl;
		}
	private:
		int c;
};

int main(){
	Z opt1;
	opt1.setX(3);
	opt1.setz(1,2);
	opt1.X::show();
	opt1.showz();
	return 0;
}
