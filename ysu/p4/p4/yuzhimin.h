#pragma once


// yuzhimin �Ի���

class yuzhimin : public CDialogEx
{
	DECLARE_DYNAMIC(yuzhimin)

public:
	yuzhimin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~yuzhimin();

// �Ի�������
	//enum { IDD = IDD_DIALOG10 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
