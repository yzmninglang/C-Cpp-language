#pragma once
#include "afxwin.h"


// receipt dialog

class receipt : public CDialogEx
{
	DECLARE_DYNAMIC(receipt)

public:
	receipt(CWnd* pParent = NULL);   // standard constructor
	virtual ~receipt();
	virtual BOOL OnInitDialog();

// Dialog Data
	enum { IDD = IDD_DIALOG12 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CStatic tire;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
};
