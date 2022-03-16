//
#pragma once 
#include<iostream>
using namespace std;


template<class T>
class myarray
{
public:
		myarray(int capacity)
		{
			cout<<"my array 有参构造调用";
			this->Capacity= capacity;
			this->Size=0;
			this->paddress=new T[this->Capacity];
		}
		//拷贝构造
		myarray(const myarray &arr)
		{
			cout<<"my array 拷贝构造调用";
			this->Capacity=arr.Capacity;
			this->Size=arr.Size;
			this->paddress= new T[arr.Capacity];
			for(int i =0 ;i<this->Size;i++)
			{
				this->paddress[i]=arr.paddress[i];
			}
		}
		~myarray()
		{
			cout<<"my array 析构构造调用";
			delete [] paddress;
			this->paddress=NULL;
		}
		myarray &operator=(const myarray  arr)
		{
			cout<<"my array 赋值运算符调用";
			this->Capacity=arr.Capacity;
			this->Size=arr.Size;
			//先判断原来堆区是否有数据，有的话先释放
			if(this->paddress!=NULL)
			{
				delete []this->paddress;
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