#pragma once
#include "afxwin.h"


// wdraw 对话框

class wdraw : public CDialogEx
{
	DECLARE_DYNAMIC(wdraw)

public:
	wdraw(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~wdraw();
	void OnClose();

// 对话框数据
	enum { IDD = IDD_DIALOG7 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton1();
	CEdit wmoney;
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
};
