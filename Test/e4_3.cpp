#include<iostream>
using namespace std;
class A
{
	public:
		A(int a=1,int b=2);
};
A::A(int a,int b)
{
	cout<<a<<" "<<b;
}
int main()
{
	A a; 
}
