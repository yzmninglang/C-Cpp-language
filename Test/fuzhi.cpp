#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"construct"<<endl;
		}
};

int main()
{
	A *p;
	A a[10];
	cout<<a;
}
