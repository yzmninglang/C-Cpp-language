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
//	cout<<"顺序表的长度： "<<L.Length();
//	cout<<"   顺序表的元素为：  ";
//	L.Output(cout);
//	L.Insert(2,68);
//	cout<<"顺序表的长度： "<<L.Length();
//	cout<<"   插入元素68：          ";
//	L.Output(cout);
//	L.Delete(5);
//	cout<<"顺序表的长度： "<<L.Length();
//	cout<<"   删除元素56：          ";
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
	//cout<<"单向链表的长度： "<<SL.Length();
	cout<<"   顺序表的元素为：  ";
	SL.Output(cout);
	SL.Insert(0,3);
	//cout<<"单向链表的长度： "<<SL.Length();
	cout<<"   插入元素3：          ";
	SL.Output(cout);
	SL.Delete(2);
	//cout<<"顺序表的长度： "<<SL.Length();
	cout<<"   删除元素5：          ";
	SL.Output(cout);
	system("pause");
} 