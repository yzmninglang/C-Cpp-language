#pragma once


// balan �Ի���

class balan : public CDialogEx
{
	DECLARE_DYNAMIC(balan)

public:
	balan(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~balan();
	virtual void OnClose();
	BOOL OnInitDialog();
	Cp4App * pApp;

// �Ի�������
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
};
