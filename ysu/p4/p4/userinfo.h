#pragma once
#include"person.h"
#define MAX 100
class userinfo
{
public:
	int n;
	//static person **perl;
	userinfo(void);
	~userinfo(void);
	person list[100];
	person find(CString uid);
	bool login(CString uid ,CString pwd);
	bool add(int mony);
	bool change(person item);
	void load();
	void write();
	
};

