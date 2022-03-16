#include<iostream>
using namespace std;

//普通函数 
int add(int a ,int b)
{
	return a+b;
}

void test()
{
	int a=1,b=20;
	char c='c';
//	cout<<add(a,b)<<endl;
	cout<<add(a,c)<<endl;
}


template<class T>
T Madd(T a, T b)
{
	return a+b;
}

test1()
{
	int a=1,b=20;
	char c='c';
	cout<<Madd(a,b)<<endl;
//	cout<<Madd(c,b)<<endl;  //错误，无法隐形转化 
	cout<<Madd<int>(a,c)<<endl; //正确，可以隐形转化 
}

int main()
{
	test();
	test1();
}

