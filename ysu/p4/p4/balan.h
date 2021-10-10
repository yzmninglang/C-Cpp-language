#pragma once


// balan 对话框

class balan : public CDialogEx
{
	DECLARE_DYNAMIC(balan)

public:
	balan(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~balan();
	virtual void OnClose();
	BOOL OnInitDialog();
	Cp4App * pApp;

// 对话框数据
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
};
