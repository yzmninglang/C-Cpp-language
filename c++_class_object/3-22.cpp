#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
			a=0,b=0;
			cout<<"default constructor called\n";
		}
		A(int i , int j)
		{
			a =i ;
			b =j;
			cout<<"constrctor :";
		}
};

int main(){
	A a[3];
	A b[3]={A(1,2),A(3,4),A(5,6)};
	return 0;
}
