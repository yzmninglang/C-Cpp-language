#include<iostream>
using namespace std;
#include"Node.h"
template<class T>
class LinkList
{
private:
    /* data */
    Node *first;  //头指针
    int n;  //链表的大小
public:
    LinkList(/* args */);
    bool Insert(int i,T data);
    bool Search(T data);
    bool delete(int i);
    bool
    ~LinkList();
};

template<class T>
LinkList<T>::LinkList(/* args */)
{
}

template<class T>
LinkList<T>::~LinkList()
{
}

