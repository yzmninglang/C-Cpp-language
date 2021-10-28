// reg.cpp : implementation file
//

#include "stdafx.h"
#include "p4.h"
#include "reg.h"
#include "afxdialogex.h"


// reg dialog

IMPLEMENT_DYNAMIC(reg, CDialogEx)

reg::reg(CWnd* pParent /*=NULL*/)
	: CDialogEx(reg::IDD, pParent)
{
	this->pApp=(Cp4App *)AfxGetApp();
}

reg::~reg()
{
}

void reg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, mess, tick);
}


BEGIN_MESSAGE_MAP(reg, CDialogEx)
	ON_BN_CLICKED(IDOK, &reg::OnBnClickedOk)
END_MESSAGE_MAP()


// reg message handlers


void reg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CString name,uid,pw,num;
	GetDlgItemText(IDC_EDIT3,name);
	GetDlgItemText(IDC_EDIT2,uid);
	GetDlgItemText(IDC_EDIT1,pw);
	//this->pApp->login(person(name,uid,pw,0));
	if(pApp->find(uid)==-1 && name!="" && uid!="" && pw !="")
	{
		person *newp=new person(name,uid,pw,0);
		this->pApp->create(newp);
		//num.Format("%d",this->pApp->num);
		this->tick.SetWindowText(TEXT("Success!"));
		//SetDlgItemText(mess,num);
	}
	else
	{
		//this->pApp->current=NULL;
		this->tick.SetWindowText(TEXT("Sorry,The card'id is alreadly used!"));
	
	}

	//CDialogEx::OnOK();
}
