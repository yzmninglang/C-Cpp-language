//#pragma once
#include "afxwin.h"


// tranf 对话框

class tranf : public CDialogEx
{
	DECLARE_DYNAMIC(tranf)

public:
	Cp4App * pApp;
	void OnClose();
	int tnum;
	tranf(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tranf();

// 对话框数据
	enum { IDD = IDD_DIALOG8 };
	virtual BOOL OnInitDialog();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit tname;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton2();
	CStatic trant;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton8();
	CEdit t_money;
};
