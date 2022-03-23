#include<iostream>

using namespace std;
#include"Node.h"
template<class T>
class LinkList
{
private:
    /* data */
    Node<T> *first;  //头指针
    int n;  //链表的大小
public:
    LinkList(/* args */);
    LinkList(T a[],int n);  //含参数的链表
    void Insert(int i,T data); 
    int Search(T data);
    bool Delete(int i);
    void Print();
    ~LinkList();
};



template<class T>
LinkList<T>::LinkList(/* args */)
{
    first=NULL;
    this->n=0;
}

template<class T>
LinkList<T>::~LinkList()
{
    Node<T> *ptr,*p;
    p=first;
    if(p!=NULL)
    {
        ptr=p;   //将第i个元素的地址给ptr
        p=p->next;   //让p往前走
        delete ptr;
    }
}

template<class T>
LinkList<T>::LinkList(T a[],int b)
{
    first=new Node<T>; //表头结点
    Node<T> *p,*ptr;
    p=first;   //首先指向表头的指针
    for (int i = 0; i < b; i++)
    {
        ptr=new Node<T>;
        ptr->data=a[i];
        p->next=ptr;
        p=p->next;
    }
    this->n=b;
}

template<class T>
int LinkList<T>::Search(T data)
{
    Node<T> *p;
    p=first;
    int loc=0;
    if(p!=NULL && p->data!=data)
    {
        p=p->next;  //如果data不匹配以及没有到表的最后一位，那么需要前行
        loc++;
    }
    if(p==NULL)
    {
        return -1;  //没找到，返回-1
    }
    else{
        return loc; //找到了，返回位置编码,（第一位是1）
    }
}


template<class T>
void LinkList<T>::Insert(int i,T data) //第一位标号是1,插入至第i位的后面
{
    Node<T> *p=first;
    Node<T> *paf;
    for(int j=0;j<i;j++)
    {
        p=p->next;
    }
    paf=new Node<T>;
    paf->data=data;   //创建一个结点，该结点的数值为data
    paf->next=p->next;  //将p的next传入paf的next
    p->next=paf;    //将p->next指向paf的结点
}



template<class T>
bool LinkList<T>::Delete(int i) //这里的i是从1开始
{
    Node<T> * p,paf;
    if(i>n)
        return false;
    for(int j=0;j<i;j++)
    {
        p=p->next;
    }   
    paf=p->next;    //要删除paf
    p->next=paf->next;  //将p的next指向paf的下一个数
    delete paf;
    return true;
}

template<class T>
void LinkList<T>::Print()
{
    Node<T> *p=first;
    if(p!=NULL)         //从表头开始，一直向下遍历
    {
        p=p->next;
        cout<<p->data<<endl;
    }
}