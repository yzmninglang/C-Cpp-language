#include<iostream>
#include<string>
using namespace std;

class Person1
{
	public:
		void showPerson1()
		{
			cout<<"person1"<<endl;
		}
 };
 
 class Person2
 {
 	public:
 		void showPerson2()
 		{
 			cout<<"person2"<<endl;
		 }
  } ;
  
template<class T>
class myclass 
{
	public:
		myclass(T &ob)
		{
			this->obj=ob;
		}
		T obj; //δ֪���������� 
		void person1()
		{
			obj.showPerson1();
		}
		void person2()
		{
			obj.showPerson2();
		}
};

int main()
{
	Person1 p1;
	myclass<Person1>c(p1); 
	c.person1();//ֻ�ܵ���person1�����ܵ���person2����Ϊģ��������ȷ�� 
	return 0;
}
 
