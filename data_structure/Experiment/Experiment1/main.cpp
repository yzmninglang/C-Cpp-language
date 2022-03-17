#include <iostream>
using namespace std;
//#include"SeqList.h"
//void main()
//{
//    SeqList<int>L(10);
//    int L_[]={21,23,14,5,56,17,31};
//    for(int i=-1;i<6;i++)
//        L.Insert(i,L_[i+1]);
//    //初始化顺序表
//    L.Output(cout);
//    cout<<"Length:"<<L.Length()<<endl<<endl;    //输出表长度
//    L.Insert(L.Search(14),68);  //14后面插入68
//    L.Delete(L.Search(56)); //删除56
//    L.Output(cout); //输出顺序表
//    system("pause");
//}



//#include <iostream
//using namespace std;
#include"SingleList.h"
void main()
{
    SingleList<int>SL;
    int SL_[]={1,2,4,5};
    for(int i=-1;i<3;i++)
    {
        SL.Insert(i,SL_[i+1]);//初始化单向链表
    }
    SL.Output(cout);//输出修改前的单链表
    SL.Insert(SL.Search(2),3);//在值为2的节点后面插入值为3的节点
    SL.Delete(SL.Search(5));//删除值为5的节点
    SL.Output(cout);//输出修改后单链表
    system("pause");
}