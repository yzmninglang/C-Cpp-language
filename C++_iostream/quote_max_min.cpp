#include<iostream>
using namespace std;
int &max(int &num1,int &num2);
int &min(int &num1,int &num2);
int main()
{
	int num1,num2;
	cout<<"Please input the first number:";
	cin>>num1;
	cout<<"Please input second number:";
	cin>>num2;
	max(num1,num2)=0;
	cout<<"I have assigned the bigger variable with 0,they are "<<endl;
	cout<<num1<<"and"<<num2<<endl;
	cout<<"Please input the first number:";
	cin>>num1;
	cout<<"Please input second number:";
	cin>>num2;
	min(num1,num2)=0;
	cout<<"I have assigned the smaller variable with 0,they are "<<endl;
	cout<<num1<<"and"<<num2<<endl;
	return 0;
}

int &max(int &num1,int &num2)
{
	return (num1>num2)?num1:num2;
}
int &min(int &num1,int &num2)
{
	return (num1<num2)?num1:num2;
}
