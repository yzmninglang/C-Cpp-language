#include <iostream>
using namespace std;
//#include"SeqList.h"
//void main()
//{
//    SeqList<int>L(10);
//    int L_[]={21,23,14,5,56,17,31};
//    for(int i=-1;i<6;i++)
//        L.Insert(i,L_[i+1]);
//    //��ʼ��˳���
//    L.Output(cout);
//    cout<<"Length:"<<L.Length()<<endl<<endl;    //�������
//    L.Insert(L.Search(14),68);  //14�������68
//    L.Delete(L.Search(56)); //ɾ��56
//    L.Output(cout); //���˳���
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
        SL.Insert(i,SL_[i+1]);//��ʼ����������
    }
    SL.Output(cout);//����޸�ǰ�ĵ�����
    SL.Insert(SL.Search(2),3);//��ֵΪ2�Ľڵ�������ֵΪ3�Ľڵ�
    SL.Delete(SL.Search(5));//ɾ��ֵΪ5�Ľڵ�
    SL.Output(cout);//����޸ĺ�����
    system("pause");
}