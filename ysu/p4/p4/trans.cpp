// trans.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "trans.h"
#include "afxdialogex.h"
#include "tranf.h"


// trans 对话框

IMPLEMENT_DYNAMIC(trans, CDialogEx)

trans::trans(CWnd* pParent /*=NULL*/)
	: CDialogEx(trans::IDD, pParent)
{

}

trans::~trans()
{
}

void trans::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, t_uid);
}


BEGIN_MESSAGE_MAP(trans, CDialogEx)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON2, &trans::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &trans::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &trans::OnBnClickedButton3)
END_MESSAGE_MAP()


// trans 消息处理程序


void trans::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();



	CDialogEx::OnClose();
}


BOOL trans::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ÔÚ´ËÌí¼Ó¶îÍâµÄ³õÊ¼»¯

	return TRUE;  // return TRUE unless you set the focus to a control
	// Òì³£: OCX ÊôÐÔÒ³Ó¦·µ»Ø FALSE
}


void trans::OnBnClickedButton2()
{
	OnClose();
}


void trans::OnBnClickedButton1()
{
	EndDialog(0);
}


void trans::OnBnClickedButton3()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	CString uid;
	GetDlgItemText(IDC_EDIT1,uid);
	if(pApp->find(uid)!=-1)
	{
		pApp->tran_p=pApp->find(uid);
		tranf * q=new tranf;
		q->DoModal();
	}
}
