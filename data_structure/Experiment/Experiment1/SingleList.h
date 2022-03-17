#include "LinearList.h"
#include "Node.h"
template <class T>
class SingleList:public LinearList<T>
{
public:
	SingleList();
	~SingleList();
	bool IsEmpty() const;
	int Length() const;
	bool Find(int i,T& x) const;
	int Search(T x) const;
	bool Insert(int i,T x);
	bool Delete(int i);
	bool Update(int i,T x);
	void Clear();
	void Output(ostream& out) const;
private:
	Node<T>* first;
};

template <class T>
SingleList<T>::SingleList()
{
	first=NULL;
	n=0;
}


template <class T>
SingleList<T>:: ~SingleList()
{
	Node<T> *p;
	while (first)
	{
		p=first->link;
		delete first;
		first=p;
	}
}

template <class T>
int SingleList<T>::Length() const
{
	return n;
}
template <class T>
bool SingleList<T>::IsEmpty() const
{
	return n==0;
}
template<class T>
bool SingleList<T>::Find(int i,T& x)const
{
	//在(a0,a1,...,an-1)中找下标为 i 的元素 ai
	if (i<0 || i>n-1)
	{
		//对 i 进行越界检查
		cout<< "Out Of Bounds";
		return false;
	}
	Node<T> *p=first;
	for (int j=0; j<i; j++)
	{
		p=p->link;
	}
	x=p->element;
	return true;
}


template<class T>
int SingleList<T>::Search(T x)const
{
	Node<T> *p=first;
	int j;
	for (j=0; p&&p->element!=x; j++)
	{
		p=p->link;
	}
	if(p)
	{
		return j;
	}
	return -1;
}


template<class T>
bool SingleList<T>::Insert(int i,T x)
{
	if (i<-1 || i>n-1)
	{
		cout<< "Out Of Bounds";
		return false;
	}
	Node<T> * q=new Node<T>;
	q->element=x;   //生成新结点 q
	Node<T> *p=first; //从头结点开始找 ai 元素所在的结点 p
	for (int j=0; j<i; j++)
	{
		p=p->link;
	}
	if(i>-1)
	{
		q->link=p->link;//新结点 q 插在 p 之后
		p->link=q;
	}
	else
	{
		q->link=first;//新结点 q 插在头结点之前，成为新的头结点
		first=q;
	}
	n++;
	return true;
}


template<class T>
bool SingleList<T>::Delete(int i)
{
	if (!n)
	{
		cout<<"UnderFlow"<<endl;
		return false;
	}
	if (i<0 || i>n-1)
	{
		cout<< "Out Of Bounds"<<endl;
		return false;
	}
	Node<T> *p=first, *q=first;
	for (int j=0; j<i-1; j++)
	{
		q=q->link;
		//q 指向要删除的结点的前一结点
	}
	if (i==0)
	{
		first=first->link;
		//若 i=0,则删除的是头结点
	}
	else
	{
		//否则删除的是非头结点
		p=q->link;
		//p 指向要删除的结点，q 是 p 的前驱
		q->link=p->link;
		//从单链表中删除 p 结点
	}
	delete p;
	//释放 p 占据的存储单元
	n--;
	return true;
}



template<class T>
bool SingleList<T>::Update(int i,T x)
{
	if (i<0 || i>n-1)
	{
		cout<< "Out Of Bounds"<<endl;
		return false;
	}
	Node<T> *p=first;
	for(int j=0; j<i; j++)
	{
		p=p->link;
	}
	p->element=x;
	return true;
}


template<class T>
void SingleList<T>::Output(ostream& out) const
{
	Node<T> *p=first;
	while(p)
	{
		out<<"element: "<<p->element<<" ";
		out<<"link:"<<p->link<<" ";
		out<<"addresss:"<<&p->element;
		out<<endl;
		p=p->link;
	}
	out<<endl;
}