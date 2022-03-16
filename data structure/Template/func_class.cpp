#include<iostream>
#include<string>
using namespace std;

template <class NameType=string ,class AgeType=int>
class Person
{
	public:
		Person(NameType name,AgeType age)
		{
			this->m_age=age;
			this->m_name=name;
		}
		void show()
		{
			cout<<"name:"<<m_name<<" "<<"age ="<<m_age;
		}
		NameType m_name;
		AgeType m_age;
 };
 
 void test()
 {
// 	Person p("sunwukong",1000); //错误，无法自动类型推导 
	Person<string ,int >p("sunwukpng",100);
	p.show();	
 }
 
 
 
 void test2()
 {
 	Person<>p2("zhubajie",100);
 	p2.show();
 }
 int main()
 {
 	test2();
 }
