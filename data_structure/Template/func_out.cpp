#include<iostream>
#include<string>
using namespace std;

template<class T1 ,class T2>
class Person
{
	public:
		Person(T1 name,T2 age);
		T1 m_name;
		T2 m_age;
		void show();
};

template<class T1 ,class T2>
Person<T1,T2>::Person(T1 name,T2 age) //由于是类模板，所以在作用域的后面要传模板参数 
{
	this->m_age=age;
	this->m_name=name;
}

template<class T1,class T2>
void Person<T1,T2>::show()  //由于是类模板，所以在作用域的后面要传参数 
{
	cout<<"name:"<<this->m_name<<" "<<"age:"<<this->m_age;

}

int main()
{
	Person<string ,int>p1("u",11);
	p1.show();
	return 0;
}
