#pragma once


// ChangePassWord �Ի���

class ChangePassWord : public CDialogEx
{
	DECLARE_DYNAMIC(ChangePassWord)

public:
	ChangePassWord(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ChangePassWord();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
};
