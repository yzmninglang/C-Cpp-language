#include "StdAfx.h"
#include "userinfo.h"
#include "p4Dlg.h"
#include <iostream>
#include <string>
using namespace std;


userinfo::userinfo(void)
{

}
void userinfo::load(){
	CString name,id,pa;
	n=0;
	for(int i=0;i<50;i++){
		name.Format(_T("name_%d"),i);
		id.Format(_T("0000%d"),i);
		pa.Format(_T("0000%d"),i);
		list[i]=person(name,id,pa,i*100);
		n++;
	}

}

bool userinfo::login(CString uid ,CString pwd){
	for(int i=0;i<n;i++){
		if((uid==list[i].uid) && (pwd==list[i].pwd)){
			return true;
		}
	}
	return false;
}

void userinfo::write(){

}
person userinfo::find(CString uid){
	for(int i =0;i<n;i++){
		
		if (list[i].uid==uid){
			return list[i];
			
		}
	}
	return person(CString(_T(" ")),CString(_T(" ")),CString(_T(" ")),0);
}

userinfo::~userinfo(void)
{
}
