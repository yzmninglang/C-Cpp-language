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

//ֱ��ָ��ģ������ľ������� 
class person:Person<string ,int>
{
	
};



//����Ҳ��Ϊһ��ģ����
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
