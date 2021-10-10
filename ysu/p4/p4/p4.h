
// p4.h : PROJECT_NAME 应用程序的主头文件
//
#define FILENAME "data.txt"
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号
#include "person.h"
#include <fstream>
// Cp4App:
// 有关此类的实现，请参阅 p4.cpp
//

class Cp4App : public CWinApp
{
public:

	Cp4App();
	void get_num();
	void save();
	bool withd(int m);
	void login(person p);
	int find(CString id);
	bool trans(int index,int money);
	int num;
	int tran_p;
	person ** perlist;
	person *current;
	void load();
	~Cp4App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern Cp4App theApp;