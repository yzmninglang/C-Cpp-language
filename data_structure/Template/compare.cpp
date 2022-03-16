#include<iostream>
#include<string>
using namespace std;

template<class T>
bool myCompyter(T &a ,T &b)
{
	if (a==b)
	{
		return true;
	}
	else
	{
		return false;
	}
 } 
 

 
 class person{
 public:
 	person(string name1,int age1)
	 {
	 	this->name=name1;
	 	this->age=age1;
		 }	
 	string name;
 	int age;
 	
 };
 void test()
 {
 	int a =10;
 	int b =20;
 	bool ret=myCompyter(a,b);
	 if(ret)
	 {
	 	cout<<"a==b"<<endl;
	  } 
	  else
	  {
	  	cout<<"a!=b"<<endl;
	  }
 }
 
 
//重载 模板函数，实现对特殊数据类型进行处理 
template<> bool myCompyter(person &a ,person &b)
{
	if(a.name==b.name&&a.age==b.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

 void test2()
 {
 	person p1("Tom",10);
	person p2("Tom",11);
 	bool ret=myCompyter(p1,p2);
	 if(ret)
	 {
	 	cout<<"a==b"<<endl;
	  } 
	  else
	  {
	  	cout<<"a!=b"<<endl;
	  }
 } 
 
 int main()
 {
 	test2(); 
 }
  
