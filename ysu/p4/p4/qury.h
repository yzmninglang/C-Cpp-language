#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// qury �Ի���

class qury : public CDialogEx
{
	DECLARE_DYNAMIC(qury)

public:
	qury(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~qury();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnStnClickedStaticcard();

	CEdit qname;
	CEdit qcard;
};
