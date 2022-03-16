#include<iostream>
using namespace std;
#include "myarray.hpp"


void test()
{
	
	myarray <int>arr(5);
	for(int i = 0;i<5;i++)
	{
		arr.Push_Back(i);
	}

	arr.Pop_Back();
	arr[1]=8;
	for(int i=0;i<arr.getSize();i++)
	{
		cout<<arr[i]<<endl;

	}
		cout<<"Capacity:"<<arr.getCapacity()<<endl;
}

void test2()
{
	myarray <Person>arr1(5);
	Person p1("nihoa",43);
	Person p2("nioa",32);
	Person p3("nrehoa",2);
	Person p4("niewoa",20);
	Person p5("nihewa",10);
	arr1.Push_Back(p1);
	arr1.Push_Back(p2);
	arr1.Push_Back(p3);
	arr1.Push_Back(p4);
	arr1.Push_Back(p5);
	for(int i =0;i<arr1.getSize();i++)
	{
		arr1[i].print();
	}

}

int main()
{

	test2();
	system("pause");
	return 0;
}