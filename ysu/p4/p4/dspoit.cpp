// dspoit.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "dspoit.h"
#include "afxdialogex.h"



// dspoit 对话框

IMPLEMENT_DYNAMIC(dspoit, CDialogEx)

dspoit::dspoit(CWnd* pParent /*=NULL*/)
	: CDialogEx(dspoit::IDD, pParent)
{

}

dspoit::~dspoit()
{
}

void dspoit::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, withdraw, w_txt);
}


BEGIN_MESSAGE_MAP(dspoit, CDialogEx)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON6, &dspoit::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON1, &dspoit::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &dspoit::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &dspoit::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON2, &dspoit::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &dspoit::OnBnClickedButton3)
END_MESSAGE_MAP()


// dspoit 消息处理程序


void dspoit::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();


	CDialogEx::OnClose();
}


BOOL dspoit::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ÔÚ´ËÌí¼Ó¶îÍâµÄ³õÊ¼»¯

	return TRUE;  // return TRUE unless you set the focus to a control
	// Òì³£: OCX ÊôÐÔÒ³Ó¦·µ»Ø FALSE
}


void dspoit::OnBnClickedButton6()
{
	EndDialog(0);
}


void dspoit::OnBnClickedButton1()
{
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	SetDlgItemText(dmoney,_T("Successfully top up 100 RMB"));
	pApp->current->money+=100;
	writehis(100);
}


void dspoit::OnBnClickedButton4()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	SetDlgItemText(dmoney,_T("Successfully top up 200 RMB"));
	pApp->current->money+=200;
	writehis(200);
}


void dspoit::OnBnClickedButton5()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	SetDlgItemText(dmoney,_T("Successfully top up 1000 RMB"));
	pApp->current->money+=1000;
	writehis(1000);
}


void dspoit::OnBnClickedButton2()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	SetDlgItemText(dmoney,_T("Successfully top up 500 RMB"));
	pApp->current->money+=500;
	writehis(500);
}


void dspoit::OnBnClickedButton3()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	SetDlgItemText(dmoney,_T("Successfully top up 2000 RMB"));
	pApp->current->money+=2000;
	writehis(2000);
}
void dspoit::writehis(int money)
{
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	string his="dspoit";
	pApp->his.push_back(history(pApp->gettime(),pApp->current->uid.GetString(),his,money));


}
