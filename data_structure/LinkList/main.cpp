#include<iostream>
using namespace std;
#include"LinkList.h"


int main()
{
    int a[]={1,2,3,2,3};
    LinkList<int> L(a,5);
    //LinkList<int> L;
    L.Insert(0,1);
    L.Insert(1,2);
    L.Insert(2,19);
    L.Print();
    cout<<L.Search(19);
    return 1;
    
}
