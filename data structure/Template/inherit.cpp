#include<iostream>
#include<string>
using namespace std;

template<class T1 ,class T2>
class Person
{
	public:
		Person(T1 name,T2 age)
		{
			m_name= name;
			m_age= age;
		}
		T1 m_name;
		T2 m_age;
};

//直接指明模板参数的具体类型 
class person:Person<string ,int>
{
	
};



//子类也作为一个模板类
template<class T1,class T2>
class person1:public Person<T1,T2>
{
	public:
		person1(T1 name,T2 age):Person<T1,T2>(name,age){
		}
};

int main()
{
	person1<string ,int> p1("zhubaijie",11);
	cout<<p1.m_age<<endl;
	return 0;
}
