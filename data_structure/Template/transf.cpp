#include<iostream>
#include<string>
using namespace std;


template<class T1,class T2>
class Person
{
	public:
		T1 m_name;
		T2 m_age;
		Person(T1 name,T2 age)
		{
			this->m_name=name;
			this->m_age=age;	
		} 
		void show()
		{
			cout<<"name:"<<m_name<<" "<<"age:"<<m_age; 
		}
};

//1.ָ���������͵ķ�ʽ
void print(Person<string ,int>p)
{
	p.show();

} 


//����ģ�廯
template<class T1,class T2>
void print1(Person<T1,T2>p)
{
	p.show();
} 

//����ģ�廯

template<class T>
void print2(T p)
{
	p.show();
 } 

int main()
{
	Person<string ,int>p1("zhubajie",19) ;
//	print(p1);
//	print1(p1) ;
	print(p1);
}

 
