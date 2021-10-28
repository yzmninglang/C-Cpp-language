// wdraw.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "wdraw.h"
#include "afxdialogex.h"
#include "receipt.h"


// wdraw 对话框

IMPLEMENT_DYNAMIC(wdraw, CDialogEx)

wdraw::wdraw(CWnd* pParent /*=NULL*/)
	: CDialogEx(wdraw::IDD, pParent)
{
		pApp= (Cp4App *)AfxGetApp();
}

wdraw::~wdraw()
{
}

void wdraw::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, wmoney);
}


BEGIN_MESSAGE_MAP(wdraw, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON8, &wdraw::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON6, &wdraw::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON1, &wdraw::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON7, &wdraw::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON2, &wdraw::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &wdraw::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &wdraw::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &wdraw::OnBnClickedButton5)
END_MESSAGE_MAP()


// wdraw 消息处理程序


void wdraw::OnBnClickedButton8()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	OnClose();
}
void wdraw::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();
	CDialogEx::OnClose();
}


void wdraw::OnBnClickedButton6()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	OnCancel();
}


void wdraw::OnBnClickedButton1()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	wmoney.SetWindowText(_T("100"));

}


void wdraw::OnBnClickedButton7()
{
	CString money;
	wmoney.GetWindowText(money);
	if(pApp->current->money<_ttoi(money) || money=="Insufficient balance")
	{
		wmoney.SetWindowText(_T("Insufficient balance"));
	}
	else
	{
		wmoney.SetWindowText(_T("Success!"));
		pApp->current->money=pApp->current->money-_ttoi(money);
		string his="withdraw";
		pApp->his.push_back(history(pApp->gettime(),pApp->current->uid.GetString(),his,_ttoi(money)));
	}
}


void wdraw::OnBnClickedButton2()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	wmoney.SetWindowText(_T("300"));
}


void wdraw::OnBnClickedButton3()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	wmoney.SetWindowText(_T("500"));
}


void wdraw::OnBnClickedButton4()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	wmoney.SetWindowText(_T("800"));
}


void wdraw::OnBnClickedButton5()
{
	receipt *p =new receipt;
	p->DoModal();

}
