
// p4.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//
#define FILENAME "data.txt"
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "person.h"
#include <fstream>
// Cp4App:
// �йش����ʵ�֣������ p4.cpp
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

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cp4App theApp;