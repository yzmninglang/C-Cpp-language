#include<iostream>
using namespace std;
//class B;
class A
{
	public:
		A(int x1):x(x1){
		}
		void print(B &x2);
//		{
//			cout<<x2.x<<endl;
//		}
		friend B;
	private:
		int x;
};
class B
{
	public:
		B(int x1):x(x1){
		}
		void print(A &x2){
			cout<<x2.x<<endl;
		}
		friend A;
	private:
		int x;
};
void A::print(B &x2)
{
	cout<<x2.x<<endl;
}
int main()
{
	A a(10);
	B b(10);
	a.print(b);
	b.print(a);
}
