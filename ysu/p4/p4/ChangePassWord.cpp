// ChangePassWord.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "ChangePassWord.h"
#include "afxdialogex.h"


// ChangePassWord 对话框

IMPLEMENT_DYNAMIC(ChangePassWord, CDialogEx)

ChangePassWord::ChangePassWord(CWnd* pParent /*=NULL*/)
	: CDialogEx(ChangePassWord::IDD, pParent)
{

}

ChangePassWord::~ChangePassWord()
{
}

void ChangePassWord::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChangePassWord, CDialogEx)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON4, &ChangePassWord::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON1, &ChangePassWord::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &ChangePassWord::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &ChangePassWord::OnBnClickedButton2)
END_MESSAGE_MAP()


// ChangePassWord 消息处理程序


void ChangePassWord::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();


	CDialogEx::OnClose();
}


BOOL ChangePassWord::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ÔÚ´ËÌí¼Ó¶îÍâµÄ³õÊ¼»¯

	return TRUE;  // return TRUE unless you set the focus to a control
	// Òì³£: OCX ÊôÐÔÒ³Ó¦·µ»Ø FALSE
}


void ChangePassWord::OnBnClickedButton4()
{
	OnClose();
}


void ChangePassWord::OnBnClickedButton1()
{
	EndDialog(0);
}


void ChangePassWord::OnBnClickedButton3()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	CString pw,pw1;
	GetDlgItemText(IDC_EDIT_newp1,pw);
	GetDlgItemText(IDC_EDIT_newp2,pw1);
	if(pw==pw1)
	{
		SetDlgItemText(IDC_STATIC_card , TEXT("change success!") );
		Cp4App * qApp= (Cp4App *)AfxGetApp();
		qApp->current->pwd=pw;
	}
	else
	{
		SetDlgItemText(IDC_STATIC_card , TEXT("Fail!") );
		
	}
}


void ChangePassWord::OnBnClickedButton2()
{
	SetDlgItemText(IDC_EDIT_newp1,_T(""));
	SetDlgItemText(IDC_EDIT_newp2,_T(""));
}
