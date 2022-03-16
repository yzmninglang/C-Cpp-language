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
Person<T1,T2>::Person(T1 name,T2 age) //��������ģ�壬������������ĺ���Ҫ��ģ����� 
{
	this->m_age=age;
	this->m_name=name;
}

template<class T1,class T2>
void Person<T1,T2>::show()  //��������ģ�壬������������ĺ���Ҫ������ 
{
	cout<<"name:"<<this->m_name<<" "<<"age:"<<this->m_age;

}

int main()
{
	Person<string ,int>p1("u",11);
	p1.show();
	return 0;
}
