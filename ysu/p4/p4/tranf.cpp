// tranf.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "tranf.h"
#include "afxdialogex.h"


// tranf 对话框

IMPLEMENT_DYNAMIC(tranf, CDialogEx)

tranf::tranf(CWnd* pParent /*=NULL*/)
	: CDialogEx(tranf::IDD, pParent)
{


}
BOOL tranf::OnInitDialog()
{
	this->pApp= (Cp4App *)AfxGetApp();
	CDialogEx::OnInitDialog();
	Cp4App * qApp= (Cp4App *)AfxGetApp();
	CString c_name=qApp->perlist[qApp->tran_p]->name;
	tname.SetWindowText(c_name);
	return TRUE;
}


tranf::~tranf()
{
}

void tranf::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, tname);
	DDX_Control(pDX, IDC_EDIT2, t_money);
}


BEGIN_MESSAGE_MAP(tranf, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &tranf::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON5, &tranf::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &tranf::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON2, &tranf::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &tranf::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON7, &tranf::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON4, &tranf::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON8, &tranf::OnBnClickedButton8)
END_MESSAGE_MAP()


// tranf 消息处理程序


void tranf::OnBnClickedButton1()
{
	this->tnum=100;
	t_money.SetWindowText(_T("100"));
	
}
void tranf::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();


	CDialogEx::OnClose();
}


void tranf::OnBnClickedButton5()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	EndDialog(0);
}


void tranf::OnBnClickedButton6()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	OnClose();
}


void tranf::OnBnClickedButton2()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
		this->tnum=200;
		t_money.SetWindowText(_T("200"));

}


void tranf::OnBnClickedButton3()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
		this->tnum=400;
		t_money.SetWindowText(_T("400"));
}


void tranf::OnBnClickedButton7()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
		this->tnum=600;
		t_money.SetWindowText(_T("600"));
}


void tranf::OnBnClickedButton4()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
		this->tnum=800;
		t_money.SetWindowText(_T("800"));
}


void tranf::OnBnClickedButton8()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	BOOL i =this->pApp->trans(this->pApp->tran_p,this->tnum);
	CString p;
	p.Format(_T("Successfully tranform %d RMB"),this->tnum);
	if(i==true)
	{
		SetDlgItemText(qq,p);
	}
	else
	{
		SetDlgItemText(qq,_T("Sorry,Insufficient balance!"));
	}

}
