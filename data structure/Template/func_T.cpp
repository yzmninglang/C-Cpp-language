#include<iostream>
using namespace std;

//交换两个整形的函数 
void swapInt(int &a ,int &b)
{
	int temp=a;
	a =b;
	b =temp;
}

//交换浮点数的
void swapDouble(double &a ,double &b)
{
	double temp=a;
	a =b;
	b =temp;
}

template<class T>
void MySwap(T &a,T &b)
{
	T temp =a;
	a=b;
	b=temp;
}

int main()
{
	int a = 10;
	int b = 20;
	double a1=1.1;
	double b1=2.2;
//	swapInt(a,b);
//	swapDouble(a1,b1);
	//自动函数推导 ，自动推导int 
	MySwap(a,b); 
	//显示指定参数
	MySwap<double>(a1,b1); 
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	cout<<"a1="<<a1<<" "<<"b1="<<b1;
	return 0;
}
