#pragma once


// SystemCate �Ի���

class SystemCate : public CDialogEx
{
	DECLARE_DYNAMIC(SystemCate)

public:
	SystemCate(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SystemCate();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
