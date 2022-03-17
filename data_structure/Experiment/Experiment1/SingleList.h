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
	//��(a0,a1,...,an-1)�����±�Ϊ i ��Ԫ�� ai
	if (i<0 || i>n-1)
	{
		//�� i ����Խ����
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
	q->element=x;   //�����½�� q
	Node<T> *p=first; //��ͷ��㿪ʼ�� ai Ԫ�����ڵĽ�� p
	for (int j=0; j<i; j++)
	{
		p=p->link;
	}
	if(i>-1)
	{
		q->link=p->link;//�½�� q ���� p ֮��
		p->link=q;
	}
	else
	{
		q->link=first;//�½�� q ����ͷ���֮ǰ����Ϊ�µ�ͷ���
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
		//q ָ��Ҫɾ���Ľ���ǰһ���
	}
	if (i==0)
	{
		first=first->link;
		//�� i=0,��ɾ������ͷ���
	}
	else
	{
		//����ɾ�����Ƿ�ͷ���
		p=q->link;
		//p ָ��Ҫɾ���Ľ�㣬q �� p ��ǰ��
		q->link=p->link;
		//�ӵ�������ɾ�� p ���
	}
	delete p;
	//�ͷ� p ռ�ݵĴ洢��Ԫ
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