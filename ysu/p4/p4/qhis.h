#pragma once
#include "afxcmn.h"


// qhis dialog

class qhis : public CDialogEx
{
	DECLARE_DYNAMIC(qhis)

public:
	qhis(CWnd* pParent = NULL);   // standard constructor
	virtual ~qhis();

// Dialog Data
	enum { IDD = IDD_DIALOG11 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
	CListCtrl mlist;
	virtual BOOL OnInitDialog();
	Cp4App *pApp;
};
