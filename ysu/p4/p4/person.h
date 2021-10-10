#pragma once
#include<string>
using namespace std;
class person
{
public:
	person(void);
	person(CString name1,CString uid1,CString pwd1,int money1);
	~person(void);
	CString name,uid,pwd;
	float money;
	bool Cmon(int m);
	bool Pwd(CString p);
};

