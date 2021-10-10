#include "StdAfx.h"
#include "person.h"
#include<string>


person::person(void)
{
}

person::person(CString name1,CString uid1,CString pwd1,int money1){
	name = name1,uid= uid1,pwd = pwd1,money = money1;
}



person::~person(void)
{
}
