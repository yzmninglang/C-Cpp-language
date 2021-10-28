// qhis.cpp : implementation file
//

#include "stdafx.h"
#include "p4.h"
#include "qhis.h"
#include "afxdialogex.h"


// qhis dialog

IMPLEMENT_DYNAMIC(qhis, CDialogEx)

qhis::qhis(CWnd* pParent /*=NULL*/)
	: CDialogEx(qhis::IDD, pParent)
{
	this->pApp=(Cp4App *)AfxGetApp();
}

qhis::~qhis()
{
}
BOOL qhis::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//init list
	mlist.InsertColumn(0,_T("Time"),0,110);
	mlist.InsertColumn(1,_T("Activity"),0,150);
	mlist.InsertColumn(2,_T("Money"),0,100);
	CString time ,act,mon;
	int i=0;
	for(vector<history>::iterator it=this->pApp->his.begin();it!=this->pApp->his.end();it++)
	{
		if(it->uid==this->pApp->current->uid.GetString())
		{
			time=it->time.c_str();
			act=it->his.c_str();
			//int mo=int(it->money);
			mon.Format("%.1f",it->money);
			mlist.InsertItem(i,time);
			mlist.SetItemText(i,1,act);
			mlist.SetItemText(i,2,mon);
			i++;
		}
	}
	return TRUE;
}

void qhis::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, mlist);
}


BEGIN_MESSAGE_MAP(qhis, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON4, &qhis::OnBnClickedButton4)
END_MESSAGE_MAP()


// qhis message handlers


void qhis::OnBnClickedButton4()
{
	EndDialog(0);
}
