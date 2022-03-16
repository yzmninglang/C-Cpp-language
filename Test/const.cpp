#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			a=80;
		}
		void app(int a) const
		{
			a=100;
			cout<<a<<endl;
		}
		int a; 
};
int main()
{
	A a;
	a.app(8);
	//cout<<a.a<<endl;
}
