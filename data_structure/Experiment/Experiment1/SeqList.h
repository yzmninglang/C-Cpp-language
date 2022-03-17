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
	int maxLength; //˳��������
	T *elements;//��̬һά�����ָ��
};


//�鿴���Ƿ�Ϊ��
template <class T>
bool SeqList<T>::IsEmpty() const
{ return n==0;}


//���ĳ���
template <class T>
int SeqList<T>::Length() const
{ return n;}

//Ѱ�Һ���
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
		//��ͷ��ʼ����ֵΪx��Ԫ��
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
	//��������
	{
		cout<<"OverFlow"<<endl;
		return false;
	}
	for (int j=n-1;j>i;j--)
	{
		elements[j+1]=elements[j];
		//�Ӻ���ǰ�������Ԫ��
	}
	elements[i+1]=x;
	//��x�����±�Ϊi��Ԫ�غ���
	n++; return true;
}

template <class T>
bool SeqList<T>::Delete(int i)
{
	if (!n)
	//��������
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
		//��ǰ�������ǰ��Ԫ��
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
	//���±�Ϊi��Ԫ��ֵ�޸�Ϊx
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