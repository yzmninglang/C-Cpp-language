#include<iostream>
using namespace std;
class A{
	public:
		A(int x1){
			x = x1;
		}
		void print(){
			cout<<"x="<<x;
		}
	private:
		int x;
};
class B:private A{
	public:
		B(int x1,int y1):A(x1){
			y = y1;
		}
		A::print;
	private:
		int y;
};

int main(){
	B b(10,20);
	b.print();
	return 0;
}
