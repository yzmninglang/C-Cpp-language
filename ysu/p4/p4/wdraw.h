#pragma once
#include "afxwin.h"


// wdraw �Ի���

class wdraw : public CDialogEx
{
	DECLARE_DYNAMIC(wdraw)

public:
	wdraw(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~wdraw();
	void OnClose();

// �Ի�������
	enum { IDD = IDD_DIALOG7 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	Cp4App * pApp;
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
