#pragma once
#include "afxwin.h"


// trans �Ի���

class trans : public CDialogEx
{
	DECLARE_DYNAMIC(trans)

public:
	trans(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~trans();

// �Ի�������
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	CEdit t_uid;
};
