#include<iostream>
using namespace std;
void  print(int a ,int b)
{
	cout<<"fun"<<endl;
} 

template<class T>
void print(T a,T b)
{
	cout<<"Template func"<<endl;
}

template<class T>
void print(T a,T b ,T c)
{
	cout<<"overload"<<endl;
}

void test()
{
	int a=0 ,b=1;
	print(a,b);//������ͨ���� 
	print<>(a,b);//����ģ�� 
	print(1,2,3);//��������ģ�� 
	//���ȵ���ƥ��
	
	char c1='a';
	char c2='b';
	print(c1,c2); 
}

int main()
{
	test();
}
