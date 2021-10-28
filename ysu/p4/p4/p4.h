
#define FILENAME "data.txt"
#include <vector>
#define HISFILE "history.txt"
#include "history.h"
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		
#include "person.h"
#include <fstream>


class Cp4App : public CWinApp
{
public:

	Cp4App();
	void get_num();
	void save();
	bool withd(int m);
	void login(person p);
	int find(CString id);
	void create(person *p);
	bool trans(int index,int money);
	int num;
	int tran_p;
	person ** perlist;
	person *current;
	void load();
	~Cp4App();
	vector<history> his;

// ��д
public:
	virtual BOOL InitInstance();
	string gettime();
	DECLARE_MESSAGE_MAP()
};

extern Cp4App theApp;