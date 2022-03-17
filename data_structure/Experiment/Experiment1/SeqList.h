#include "LinearList.h"



template<class T>
class SeqList:public LinearList<T>
{
public:
	SeqList(int mSize)
	{
		maxLength=mSize;
		elements=new T[maxLength];
		n=0;
	}
	~SeqList() { 
		delete [] elements;
	};
	bool IsEmpty() const;
	int Length() const;
	bool Find(int i,T& x) const;
	int Search(T x) const;
	bool Insert(int i,T x);
	bool Delete(int i);
	bool Update(int i,T x);
	void Output(ostream& out)const ;
private:
	int maxLength; //顺序表的容量
	T *elements;//动态一维数组的指针
};


//查看表是否为空
template <class T>
bool SeqList<T>::IsEmpty() const
{ return n==0;}


//求表的长度
template <class T>
int SeqList<T>::Length() const
{ return n;}

//寻找函数
template<class T>
bool SeqList<T>::Find(int i,T& x) const
{
	if (i<0 || i>n-1)  
	{
		cout<<"Out of Bounds"<<endl;
		return false;
	}
	x=elements[i];
	return true;
}



template<class T>
int SeqList<T>::Search(T x) const
{
	for(int j=0;j<n;j++)
	{
		if (elements[j]==x)
		//从头开始搜索值为x的元素
		{
			return j;
		}
	}
	return -1;
}


template<class T>
bool SeqList<T>::Insert(int i,T x)
{
	if (i<-1 || i>n-1)
	{
	cout<<"Out Of Bounds"<<endl;
	return false;
	}
	if (n== maxLength)
	//上溢出检查
	{
		cout<<"OverFlow"<<endl;
		return false;
	}
	for (int j=n-1;j>i;j--)
	{
		elements[j+1]=elements[j];
		//从后往前逐个后移元素
	}
	elements[i+1]=x;
	//将x插入下标为i的元素后面
	n++; return true;
}

template <class T>
bool SeqList<T>::Delete(int i)
{
	if (!n)
	//下溢出检查
	{
		cout<<"UnderFlow"<<endl;
		return false;
	}
	if (i<0 || i>n-1)
	{
		cout<<"Out Of Bounds"<<endl;
		return false;
	}
	for (int j=i+1;j<n;j++)
	{
		elements[j-1]=elements[j];
		//从前往后逐个前移元素
	}
	n--;
	return true;
}



template <class T>
bool SeqList<T>::Update(int i,T x)
{
	if (i<0 || i>n-1)
	{
		cout<<"Out Of Bounds"<<endl;
		return false;
	}
	elements[i]=x;
	//将下标为i的元素值修改为x
	return true;
	}



template <class T>
void SeqList<T>::Output(ostream& out)const
{
	for (int i=0; i<n; i++)
	{
		out<<"data: "<<elements[i]<<" ";
		out<<"address: "<<&elements[i]<<" "<<endl;
	}
out<<endl;
}