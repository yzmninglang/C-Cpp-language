#include<iostream>
using namespace std;
class A{
	public:
		A(int i):x(i){};
		A(){ x=0;
		}
		friend A operator++(A a);
		friend A operator--(A &a);
		void print(){
			cout<<x<<endl;
		}
	protected:
		int x;
};
A operator++(A a){
	++a.x;
	return a;
}
A operator--(A &a){
	--a.x;
	return a;
}

int main(){
	A a(7);
	++a;
	a.print();
	--a;
	a.print();
	return 0;
}
