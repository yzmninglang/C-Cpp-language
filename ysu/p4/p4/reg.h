#pragma once
#include "p4.h"
#include "afxwin.h"

// reg dialog

class reg : public CDialogEx
{
	DECLARE_DYNAMIC(reg)

public:
	reg(CWnd* pParent = NULL);   // standard constructor
	virtual ~reg();

// Dialog Data
	enum { IDD = IDD_DIALOG10 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	Cp4App *pApp;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CStatic tick;
};
