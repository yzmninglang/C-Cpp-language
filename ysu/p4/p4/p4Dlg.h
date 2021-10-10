
// p4Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "resource.h"

// Cp4Dlg 对话框
class Cp4Dlg : public CDialogEx
{
// 构造
public:
	Cp4Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_P4_DIALOG };
	CImage img;
	CRect rect;

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CStatic mtext;
	CEdit m_uid;
	afx_msg void OnStnClickedBox();
	CStatic m_imag;
};
