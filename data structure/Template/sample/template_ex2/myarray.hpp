//
#pragma once 
#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person(){};
	Person(string name,int age)
	{
		m_name=name;
		m_age=age;
	}
	void print()
	{
		cout<<"name:"<<this->m_name<<" "<<"age:"<<this->m_age<<endl;
	
	}
private:
	string m_name;
	int m_age;

};



template<class T>
class myarray
{
public:
		myarray(int capacity)
		{
			cout<<"my array 有参构造调用"<<endl;
			this->Capacity= capacity;
			this->Size=0;
			this->paddress=new T[this->Capacity];
		}
		//拷贝构造深拷贝
		myarray(const myarray &arr)
		{
			//普通量直接赋值，但是对于指针必须要逐一赋值（深拷贝）
			cout<<"my array 拷贝构造调用"<<endl;
			this->Capacity=arr.Capacity;
			this->Size=arr.Size;
			this->paddress= new T[arr.Capacity];
			for(int i =0 ;i<this->Size;i++)
			{
				this->paddress[i]=arr.paddress[i];
			}
		}

		void Push_Back(const T &val)
		{
			if(this->Capacity==this->Size)
			{
				return;
			}
			this->paddress[this->Size]=val;
			this->Size++;
		}

		void Pop_Back()
		{
			if(this->Size==0)
			{
				return;
			}
			this->Size--;		
		}

		//重载中括号
		T& operator[](int index)
		{
		
			return this->paddress[index];
		}


		//获得数组的容量
		int getCapacity()
		{
			return this->Capacity;
		}

		int getSize()
		{
			return this->Size;
		}
		~myarray()
		{
			cout<<"my array 析构构造调用"<<endl;
			delete [] paddress;
			this->paddress=NULL;
		}
		//运算符合拷贝构造函数都要明确深拷贝
		myarray &operator=(const myarray  arr)
		{
			cout<<"my array 赋值运算符=调用"<<endl;
			this->Capacity=arr.Capacity;
			this->Size=arr.Size;
			//先判断原来堆区是否有数据，有的话先释放
			if(this->paddress!=NULL)
			{
				delete []this->paddress;
				this->paddress=new T[arr.Capacity];
			}
			for(int i = 0;i<arr.Size;i++)
			{
				this->paddress[i]=arr.paddress[i];
			}
			return *this;
		
		}
private:
	int Capacity,Size;
	T *paddress;
};