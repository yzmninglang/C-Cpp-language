//#include<iostream>
//using namespace std;
//#include"SeqList.h"	
////#include "SingleList.h"
//void main()
//{
//	//SeqList<int> L(10);
//	SeqList<int>L(10);
//	L.Insert(-1,21); 
//	L.Insert(0,23); 
//	L.Insert(1,14); 
//	L.Insert(2,5);
//	L.Insert(3,56); 
//	L.Insert(4,17);
//	L.Insert(5,31);
//	cout<<"˳���ĳ��ȣ� "<<L.Length();
//	cout<<"   ˳����Ԫ��Ϊ��  ";
//	L.Output(cout);
//	L.Insert(2,68);
//	cout<<"˳���ĳ��ȣ� "<<L.Length();
//	cout<<"   ����Ԫ��68��          ";
//	L.Output(cout);
//	L.Delete(5);
//	cout<<"˳���ĳ��ȣ� "<<L.Length();
//	cout<<"   ɾ��Ԫ��56��          ";
//	L.Output(cout);
//	system("pause");
//} 
 



#include<iostream>
using namespace std;
//#include"SeqList.h"	
#include "SingleList.h"
void main()
{
	//SeqList<int> L(10);
	SingleList<int>SL;
	SL.Insert(-1,1); 
	SL.Insert(0,2); 
	SL.Insert(1,4); 
	SL.Insert(2,5);
	//cout<<"��������ĳ��ȣ� "<<SL.Length();
	cout<<"   ˳����Ԫ��Ϊ��  ";
	SL.Output(cout);
	SL.Insert(0,3);
	//cout<<"��������ĳ��ȣ� "<<SL.Length();
	cout<<"   ����Ԫ��3��          ";
	SL.Output(cout);
	SL.Delete(2);
	//cout<<"˳���ĳ��ȣ� "<<SL.Length();
	cout<<"   ɾ��Ԫ��5��          ";
	SL.Output(cout);
	system("pause");
} 