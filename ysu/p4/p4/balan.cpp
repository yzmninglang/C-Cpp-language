// balan.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "balan.h"
#include "afxdialogex.h"


// balan 对话框

IMPLEMENT_DYNAMIC(balan, CDialogEx)

balan::balan(CWnd* pParent /*=NULL*/)
	: CDialogEx(balan::IDD, pParent)
{

}

balan::~balan()
{
}

void balan::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(balan, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON5, &balan::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &balan::OnBnClickedButton6)
END_MESSAGE_MAP()


// balan 消息处理程序


void balan::OnBnClickedButton5()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	EndDialog(0);
}
BOOL balan::OnInitDialog()
{
	pApp= (Cp4App *)AfxGetApp();
	CString b_name,b_card,b_money;
	//int b_money;
	b_name=pApp->current->name;
	b_card=pApp->current->uid;
	int money=pApp->current->money;
	b_money.Format("%d",money);
	SetDlgItemText(bname,b_name);
	SetDlgItemText(bcard,b_card);
	SetDlgItemText(bmoney,b_money);
	return TRUE;
}

void balan::OnBnClickedButton6()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
	OnClose();
}
void balan::OnClose()
{
	CDialog* pdlg=(CDialog *)AfxGetMainWnd();
	pdlg->DestroyWindow();


	CDialogEx::OnClose();
}
