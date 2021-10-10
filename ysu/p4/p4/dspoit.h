#pragma once
#include "afxwin.h"


// dspoit 对话框

class dspoit : public CDialogEx
{
	DECLARE_DYNAMIC(dspoit)

public:
	dspoit(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~dspoit();

// 对话框数据
	enum { IDD = IDD_DIALOG6 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton1();
	CStatic w_txt;
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
