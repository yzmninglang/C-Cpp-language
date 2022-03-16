#include<iostream>
#include<string>
using namespace std;


//ÀàÄ£°å
template<class NameType ,class Agetype>
class Person
{
	public:
		Person(NameType name ,Agetype age)
		{
			this->m_name=name;
			this->m_age=age;
		}
		NameType m_name;
		Agetype m_age;		
}; 

void test()
{
	Person<string,int> p1("tom",99);
	cout<<p1.m_name<<" "<<p1.m_age;
}

int main()
{
	test();
}


