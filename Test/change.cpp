#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"construct"<<endl; 
		}
		~A()
		{
			cout<<"deconstruct"<<endl;
		}
};
A change(A a)
{
	
}
void t(int a,int b=7,char z='*')
{
	
}
int main()
{
	t(0,0,'*');
	
}
