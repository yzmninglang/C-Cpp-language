// receipt.cpp : implementation file
//

#include "stdafx.h"
#include "p4.h"
#include "receipt.h"
#include "afxdialogex.h"


// receipt dialog

IMPLEMENT_DYNAMIC(receipt, CDialogEx)

receipt::receipt(CWnd* pParent /*=NULL*/)
	: CDialogEx(receipt::IDD, pParent)
{

}
BOOL receipt::OnInitDialog()
{
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	SetDlgItemText(t1,pApp->gettime().c_str());
	SetDlgItemText(cc,pApp->current->uid);
	CString re1;
	vector<history>::iterator it=pApp->his.end()-1;
	re1.Format("withdraw:%.1f",it->money);
	SetDlgItemText(li,re1);
	return TRUE;
}
receipt::~receipt()
{
}

void receipt::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(receipt, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON5, &receipt::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &receipt::OnBnClickedButton4)
END_MESSAGE_MAP()


// receipt message handlers


void receipt::OnBnClickedButton5()
{
	// TODO: Add your control notification handler code here
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	CRect rect;
	this->GetClientRect(rect);
	CImage image;
	image.Create(rect.Width(),rect.Height(),24);
	CDC* DCpoint=this->GetDC();
	//DCpoint->Ellipse(20,20,200,200);
	CDC dstDC;
	dstDC.CreateCompatibleDC(DCpoint);
	dstDC.SelectObject(image);
	dstDC.BitBlt(0,0,rect.Width(),rect.Height(),DCpoint,0,0,SRCCOPY);
	//string rec=".png";
	//rec="./"+pApp->gettime()+pApp->current->uid.GetString()+rec;
	image.Save("./receipt.jpg");
	CString suc;
	suc="success!";
	SetDlgItemText(li2,suc);
}


void receipt::OnBnClickedButton4()
{
	EndDialog(0);
	// TODO: Add your control notification handler code here
}
