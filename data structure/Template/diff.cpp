#include<iostream>
using namespace std;

//��ͨ���� 
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
//	cout<<Madd(c,b)<<endl;  //�����޷�����ת�� 
	cout<<Madd<int>(a,c)<<endl; //��ȷ����������ת�� 
}

int main()
{
	test();
	test1();
}

