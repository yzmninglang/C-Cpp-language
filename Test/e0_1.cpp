#include<iostream>
using namespace std;
class B;
class A{
	friend class B;
	int i;
	public:
		void ds(){
			cout<<i<<endl;
		}
};
class B{
	public:
		change(A &a){
			a.i=99;
		}
};
int main()
{
	int a,b,c;
	a=3/2.1;
	cout<<a;
}
