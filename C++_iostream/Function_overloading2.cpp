#include<iostream>
using namespace std;
int mul(int x,int y)
{
	return x*y;
}
int mul(int x,int y,int z)
{
	return x*y*z;
}
int main(){
	int x,y,z;
	x=1,y=2,z=3;
	cout<<x<<"*"<<y<<"="<<mul(x,y)<<endl;
	cout<<x<<"*"<<y<<"*"<<z<<"="<<mul(x,y,z)<<endl;
	return 0;
}
