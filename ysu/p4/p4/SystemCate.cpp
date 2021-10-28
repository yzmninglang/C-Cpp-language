// SystemCate.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "SystemCate.h"
#include "afxdialogex.h"
#include "ChangePassWord.h"
#include "qury.h"
#include "trans.h"
#include "dspoit.h"
#include "wdraw.h"



// SystemCate 对话框

IMPLEMENT_DYNAMIC(SystemCate, CDialogEx)

SystemCate::SystemCate(CWnd* pParent /*=NULL*/)
	: CDialogEx(SystemCate::IDD, pParent)
{
	this->pApp=(Cp4App *)AfxGetApp();
}

SystemCate::~SystemCate()
{
}

void SystemCate::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SystemCate, CDialogEx)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON_change, &SystemCate::OnBnClickedButtonchange)
	ON_BN_CLICKED(IDC_BUTTON_wd, &SystemCate::OnBnClickedButtonwd)
	ON_BN_CLICKED(IDC_BUTTON_qury, &SystemCate::OnBnClickedButtonqury)
	ON_BN_CLICKED(IDC_BUTTON_trans, &SystemCate::OnBnClickedButtontrans)
	ON_BN_CLICKED(IDC_BUTTON_despoit, &SystemCate::OnBnClickedButtondespoit)
	ON_BN_CLICKED(IDC_BUTTON_quit1, &SystemCate::OnBnClickedButtonquit1)
	ON_BN_CLICKED(IDC_BUTTON_qury2, &SystemCate::OnBnClickedButtonqury2)
END_MESSAGE_MAP()


// SystemCate 消息处理程序


void SystemCate::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();

	CDialogEx::OnClose();
}




BOOL SystemCate::OnInitDialog()
{

	CDialogEx::OnInitDialog();
	CString m="Welcome to linkwe bank,";
	SetDlgItemText(usern,m+this->pApp->current->name);
	SetDlgItemText(userpw,this->pApp->current->uid);
	

	return TRUE;  
}


void SystemCate::OnBnClickedButtonchange()
{
	ChangePassWord *p =new ChangePassWord;
	p->DoModal();
}


void SystemCate::OnBnClickedButtonwd()
{

}


void SystemCate::OnBnClickedButtonqury()
{

	qury *p =new qury;
	p->DoModal();
}


void SystemCate::OnBnClickedButtontrans()
{
	trans *p =new trans;
	p->DoModal();
}


void SystemCate::OnBnClickedButtondespoit()
{
	dspoit *p =new dspoit;
	p->DoModal();
}


void SystemCate::OnBnClickedButtonquit1()
{
	OnClose();
}


void SystemCate::OnBnClickedButtonqury2()
{
	wdraw *p =new wdraw;
	p->DoModal();
}
