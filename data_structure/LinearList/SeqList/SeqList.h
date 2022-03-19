#include<iostream>
#include<stdlib.h>
#include"LinearList.h"
const int defaultSize=100;

template<class T>
class SeqList:public LinearList<T>{
protected:
	T * data;  //˳�򴢴���Ƶ������б�
	int maxSize;   //�ñ������
	int n;    //�ñ����е����ݴ�С

	//��������ʽ
	void ReverseSort();	
	void ForwardSort();
public:
	SeqList(int sz=defaultSize); //���캯��
	SeqList(T a[],int i);
	~SeqList(); //��������
	int Size()const;
	int Length()const;
	int Search(T x)const;
	bool Insert(int i,T x);
	bool Remove (int i,T &x);   //ɾ�����ҷ���ɾ��������
	void Output();
	void Sort(int m); //ʵ���������������
	LinearList<T>operator=(LinearList<T> &L);
};


template<class T>
SeqList<T>::~SeqList()
{
	delete []this->data;	//��Ϊ������������ʵ�ֵģ���������ط�������ɾ����ֱ��ɾ��data���鼴��
}


template<class T>
SeqList<T>::SeqList(int sz)
{
	//���붯̬�ڴ�,������Ա�Ĵ���
	data= new T[sz];
	if(data==NULL)
	{
		cout<<"����������"<<endl;
		exit(1);
	}
}

template<class T>
SeqList<T>::SeqList(T a[],int i)
{
	data = new T[i]
	this->maxSize=i;	//ָ���б������
	this->n=0;
	for(int j=0;j<sizeof(a)/sizeof(a[0]),j++)
	{
		data[j]=a[j]  //ʵ�ִ���һ���б���Ϊ��ʼ������
		this->n++;
	}
}



template<class T>
int SeqList<T>::Size()const
{
	return maxSize;
}

template<class T>
int SeqList<T>::Length()const
{
	return n;
}



template<class T>
int SeqList<T>::Search(T x)const 
{
	for(int i =0;i<n;i++)
	{
		if (x==data[i])
		{
			return i;   //����Ѱ�ҵ���ֵ��λ��
		}
	
	}
	return -1;	//����Ҳ�������ô���ظ�һ

}

template<class T>
LinearList<T> SeqList<T>::operator=(LinearList<T> &L)
{
	if(this !=&L)
	{
		this->n=L.n;
		this->maxSize=L.MaxSize;	
		delete []this->data;		//�ͷ�ԭ���ڴ�
		this->data=new T[maxSize];	//�����µĿռ�
		for(int i =0 ;i<this->n;i++)
		{
			this->data[i]=L.data[i];	//���б���е�ֵ��һ���Ƶ��µı���
		}
		return *this;		//�����б�����������"="��Ҫ��
	}
}

template<class T>
bool SeqList<T>::Insert(int i,T x)
{
	if(n<maxSize)
	{
		for(int j = n;j>i��j--)
		{
			data[j]=data[j-1];	//���һ��Ϊj=i+1,data[i]->data[i+1]
		}
		data[i]=x;				//��data[i]��������ϣ���滻��ֵ
		this->n++;
		return true;
	}
	return false;
}


template<class T>
bool SeqList<T>::Remove(int i,T &x)
{
	if(i>n-1) return false;
	x=data[i];	//���ر��Ƴ���ֵ
	for(int j =i;j<=n-2;j++)
	{
		data[j]=data[j+1]; //�����е�����������һ����λ
	}
	n--;	//���Ա�ĳ��ȼ�Сһλ
	return true;
}



template<class T>
void SeqList<T>::Output()
{
	for(int i=0;i<n;i++)
	{
		cout<<data[i]<<" "<<endl; //���������ֵ��˳�����
	}
}

template<class T>
void SeqList<T>::Sort(int b)
{
	switch(b){
		case 0 :
			this->ForwardSort();
			break;
		case 1 :
			this->ReverseSort();
			break;
		default:
			break;
	}

}

template<class T>
void SeqList<T>::ForwardSort()
{
	for(int i =0;i<n;i++)		//ð�������㷨
	{
		for(int j=0;j<i;j++)
		{
			if (a[i]>a[j])
			{
				temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}


template<class T>
void SeqList<T>::ReverseSort()
{
	for(int i =0;i<n;i++)		//ð�������㷨
	{
		for(int j=0;j<i;j++)
		{
			if (a[i]<a[j])
			{
				temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}







