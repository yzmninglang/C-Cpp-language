#include<iostream>
using namespace std;

//�����������εĺ��� 
void swapInt(int &a ,int &b)
{
	int temp=a;
	a =b;
	b =temp;
}

//������������
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
	//�Զ������Ƶ� ���Զ��Ƶ�int 
	MySwap(a,b); 
	//��ʾָ������
	MySwap<double>(a1,b1); 
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	cout<<"a1="<<a1<<" "<<"b1="<<b1;
	return 0;
}
