#include<iostream>
using namespace std;



template<typename T>

//����ģ��������һ�µ��������� 
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

//ģ�����ȷ��T���������ͣ������޷�ʹ�� 
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
