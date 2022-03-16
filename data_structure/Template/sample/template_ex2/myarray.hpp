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
			cout<<"my array �вι������"<<endl;
			this->Capacity= capacity;
			this->Size=0;
			this->paddress=new T[this->Capacity];
		}
		//�����������
		myarray(const myarray &arr)
		{
			//��ͨ��ֱ�Ӹ�ֵ�����Ƕ���ָ�����Ҫ��һ��ֵ�������
			cout<<"my array �����������"<<endl;
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

		//����������
		T& operator[](int index)
		{
		
			return this->paddress[index];
		}


		//������������
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
			cout<<"my array �����������"<<endl;
			delete [] paddress;
			this->paddress=NULL;
		}
		//������Ͽ������캯����Ҫ��ȷ���
		myarray &operator=(const myarray  arr)
		{
			cout<<"my array ��ֵ�����=����"<<endl;
			this->Capacity=arr.Capacity;
			this->Size=arr.Size;
			//���ж�ԭ�������Ƿ������ݣ��еĻ����ͷ�
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