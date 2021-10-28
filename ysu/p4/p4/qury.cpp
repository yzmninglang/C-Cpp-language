// qury.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "qury.h"
#include "afxdialogex.h"
#include "person.h"
#include "balan.h"
#include "qhis.h"

// qury 对话框

IMPLEMENT_DYNAMIC(qury, CDialogEx)

qury::qury(CWnd* pParent /*=NULL*/)
	: CDialogEx(qury::IDD, pParent)
{

	//qname.SetWindowTextW(TEXT("nihao"));
	//SetDlgItemText( IDC_STATIC_name, TEXT("我是控件显示的文字") );


}

qury::~qury()
{
}

void qury::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_EDIT2, qname);
	DDX_Control(pDX, IDC_EDIT3, qcard);
}


BEGIN_MESSAGE_MAP(qury, CDialogEx)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON4, &qury::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &qury::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &qury::OnBnClickedButton1)
	ON_STN_CLICKED(IDC_STATIC_card, &qury::OnStnClickedStaticcard)
	ON_BN_CLICKED(IDC_BUTTON2, &qury::OnBnClickedButton2)
END_MESSAGE_MAP()


// qury 消息处理程序


void qury::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();

	CDialogEx::OnClose();
}


BOOL qury::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	Cp4App * qApp= (Cp4App *)AfxGetApp();
	CString c_name=qApp->current->name;
	//c_name.Format(_T(string("sa")));
	
	qname.SetWindowText(c_name);
	qcard.SetWindowText(qApp->current->uid);
	// TODO:  ÔÚ´ËÌí¼Ó¶îÍâµÄ³õÊ¼»¯

	return TRUE;  // return TRUE unless you set the focus to a control
	// Òì³£: OCX ÊôÐÔÒ³Ó¦·µ»Ø FALSE
}


void qury::OnBnClickedButton4()
{
	OnClose();
}


void qury::OnBnClickedButton3()
{
	EndDialog(0);
}


void qury::OnBnClickedButton1()
{
	balan *p=new balan;
	p->DoModal();
}


void qury::OnStnClickedStaticcard()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
}


void qury::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	qhis *p= new qhis;
	p->DoModal();
}
