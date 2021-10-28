#pragma once
#include<string>
using namespace std;
class person
{
public:
	person(void);
	person(CString name1,CString uid1,CString pwd1,int money1);
	~person(void);
	friend class Cp4App;
	friend class dspoit;
	friend class wdraw;
	friend class balan;
	friend class qury;
	friend class receipt;
	friend class ChangePassWord;
	friend class tranf;
	friend class qhis;
	friend class SystemCate;
	bool Cmon(int m);
	bool Pwd(CString p);
private:
	CString name,uid,pwd;
	float money;
	//CString name,uid,pwd;
};

