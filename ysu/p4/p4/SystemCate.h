#pragma once


// SystemCate 对话框

class SystemCate : public CDialogEx
{
	DECLARE_DYNAMIC(SystemCate)

public:
	SystemCate(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SystemCate();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonchange();
	afx_msg void OnBnClickedButtonwd();
	afx_msg void OnBnClickedButtonqury();
	afx_msg void OnBnClickedButtontrans();
	afx_msg void OnBnClickedButtondespoit();
	afx_msg void OnBnClickedButtonquit1();
	afx_msg void OnBnClickedButtonqury2();
};
