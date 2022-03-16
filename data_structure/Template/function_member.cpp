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
		T obj; //未知名对象类型 
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
	c.person1();//只能调用person1，不能调用person2，因为模板类型已确定 
	return 0;
}
 
