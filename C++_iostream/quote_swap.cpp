#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp =a;
	a =b;
	b =temp;
}
int main(){
	int a=5,b=10;
	cout<<"a="<<a<<" "<<"b="<<b;
	swap(a,b);
	cout<<"a="<<a<<" "<<"b="<<b;
	return 0;
}
