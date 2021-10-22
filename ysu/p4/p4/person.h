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
	friend class Cp4App;
	friend class dspoit;
	friend class wdraw;
	friend class balan;
	bool Cmon(int m);
	bool Pwd(CString p);
private:
	float money;
};

