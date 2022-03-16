#include <iostream>
using namespace std;


class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}

};

class B : public A
{
public:
	B()
	{
		cout << "B()" << endl;
	}

};

int main()
{
	B b;
	B bb(b);		//调用系统默认提供的拷贝构造器
	return 0;
}

