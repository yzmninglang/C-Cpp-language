#include<iostream>
using namespace std;
#include"LinkList.h"


int main()
{
    int a[]={1,2,3,2,3};
    LinkList<int> L(a,5);
    // L.Insert(0,1);
    L.Print();
    return 1;
    
}
