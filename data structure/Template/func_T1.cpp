#include<iostream>
using namespace std;



template<typename T>

//函数模板必须具有一致的数据类型 
void myswap(T&a,T&b)
{
	T temp= a;
	a= b;
	b= temp;
}


void test()
{
	int a=10;
	int b =20;
	char c= 'c';
	myswap(a,b);
//	myswap(a,c);
	cout<<"a= "<<a<<" "<<"b="<<b<< " c="<<c; 
}

//模板必须确定T的数据类型，否则无法使用 
template<class T>
void func()
{
	cout<<"func"<<endl;
}

void test1()
{
//	func();
	func<int>();
}

int main()
{
	test();
	return 0;
}
