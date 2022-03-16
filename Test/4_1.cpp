#include<iostream>
using namespace std;
class base{
	public:
		base(){
			a=0,b=0;
		}
	protected:
		int a,b;
};
class dereive:public base{
	public:
		dereive(){
			a=1,b=2;
		}
		void dis()
		{
			cout<<a<<","<<b;
		}
		
};
int main()
{
	dereive b1;
	b1.dis();
}
