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
			cout<<"my array �вι������";
			this->Capacity= capacity;
			this->Size=0;
			this->paddress=new T[this->Capacity];
		}
		//��������
		myarray(const myarray &arr)
		{
			cout<<"my array �����������";
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
			cout<<"my array �����������";
			delete [] paddress;
			this->paddress=NULL;
		}
		myarray &operator=(const myarray  arr)
		{
			cout<<"my array ��ֵ���������";
			this->Capacity=arr.Capacity;
			this->Size=arr.Size;
			//���ж�ԭ�������Ƿ������ݣ��еĻ����ͷ�
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