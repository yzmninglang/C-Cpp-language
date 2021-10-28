
// p4Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "resource.h"

// Cp4Dlg �Ի���
class Cp4Dlg : public CDialogEx
{
// ����
public:
	Cp4Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_P4_DIALOG };
	CImage img;
	CRect rect;

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
	afx_msg void OnBnClickedCancel2();
};
