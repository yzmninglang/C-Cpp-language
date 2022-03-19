#include<iostream>
#include<stdlib.h>
#include"LinearList.h"
const int defaultSize=100;

template<class T>
class SeqList:public LinearList<T>{
protected:
	T * data;  //顺序储存控制的数据列表
	int maxSize;   //该表的容量
	int n;    //该表已有的数据大小

	//两种排序方式
	void ReverseSort();	
	void ForwardSort();
public:
	SeqList(int sz=defaultSize); //构造函数
	SeqList(T a[],int i);
	~SeqList(); //析构函数
	int Size()const;
	int Length()const;
	int Search(T x)const;
	bool Insert(int i,T x);
	bool Remove (int i,T &x);   //删除并且返回删除的数据
	void Output();
	void Sort(int m); //实现正序，逆序的排列
	LinearList<T>operator=(LinearList<T> &L);
};


template<class T>
SeqList<T>::~SeqList()
{
	delete []this->data;	//因为这里是由数组实现的，所以这个地方无需逐步删除，直接删除data数组即可
}


template<class T>
SeqList<T>::SeqList(int sz)
{
	//申请动态内存,完成线性表的创建
	data= new T[sz];
	if(data==NULL)
	{
		cout<<"储存分配出错"<<endl;
		exit(1);
	}
}

template<class T>
SeqList<T>::SeqList(T a[],int i)
{
	data = new T[i]
	this->maxSize=i;	//指定列表的容量
	this->n=0;
	for(int j=0;j<sizeof(a)/sizeof(a[0]),j++)
	{
		data[j]=a[j]  //实现传入一个列表作为初始的数据
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
			return i;   //返回寻找到的值的位置
		}
	
	}
	return -1;	//如果找不到，那么返回负一

}

template<class T>
LinearList<T> SeqList<T>::operator=(LinearList<T> &L)
{
	if(this !=&L)
	{
		this->n=L.n;
		this->maxSize=L.MaxSize;	
		delete []this->data;		//释放原有内存
		this->data=new T[maxSize];	//申请新的空间
		for(int i =0 ;i<this->n;i++)
		{
			this->data[i]=L.data[i];	//将列表的中的值逐一复制到新的表中
		}
		return *this;		//返回列表对象本身，满足多"="的要求
	}
}

template<class T>
bool SeqList<T>::Insert(int i,T x)
{
	if(n<maxSize)
	{
		for(int j = n;j>i；j--)
		{
			data[j]=data[j-1];	//最后一次为j=i+1,data[i]->data[i+1]
		}
		data[i]=x;				//将data[i]换成我们希望替换的值
		this->n++;
		return true;
	}
	return false;
}


template<class T>
bool SeqList<T>::Remove(int i,T &x)
{
	if(i>n-1) return false;
	x=data[i];	//返回被移除的值
	for(int j =i;j<=n-2;j++)
	{
		data[j]=data[j+1]; //将表中的数整体往后一个单位
	}
	n--;	//线性表的长度减小一位
	return true;
}



template<class T>
void SeqList<T>::Output()
{
	for(int i=0;i<n;i++)
	{
		cout<<data[i]<<" "<<endl; //按照数组的值的顺序输出
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
	for(int i =0;i<n;i++)		//冒泡排序算法
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
	for(int i =0;i<n;i++)		//冒泡排序算法
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







