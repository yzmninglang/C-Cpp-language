
// p4Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "person.h"
#include "p4.h"
#include "p4Dlg.h"
#include "afxdialogex.h"
#include "SystemCate.h"
#include "userinfo.h"
#include<string>
#include<iostream>
//#include"yuzhimin.h"
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cp4Dlg 对话框




Cp4Dlg::Cp4Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cp4Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cp4Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, Text_Box, mtext);
	DDX_Control(pDX, IDC_EDIT2, m_uid);
	//DDX_Control(pDX, logo, m_imag);
}

BEGIN_MESSAGE_MAP(Cp4Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &Cp4Dlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &Cp4Dlg::OnBnClickedCancel)
	ON_STN_CLICKED(Text_Box, &Cp4Dlg::OnStnClickedBox)
END_MESSAGE_MAP()


// Cp4Dlg 消息处理程序

BOOL Cp4Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Cp4Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Cp4Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Cp4Dlg::OnBnClickedOk()
{
	CString uid ,pw;
	//CString n1;
	//userinfo us1;
	//us1.load();
	//uid.Format(_T("0000%d"),us1.n);
	//pw.Format(_T("0000%d"),us1.list[2].money);
	//MessageBox(pw);
	//if ((pw==uid)){
	//	
	//}
	Cp4App * pApp= (Cp4App *)AfxGetApp();
	//pApp->m_PerArray();
	//pApp->curper=new person(CString("yuzhimin"),CString("1234"),CString("1234"),100);

	GetDlgItemText(IDC_EDIT2,uid);
	GetDlgItemText(IDC_EDIT1,pw);
	string usid = CT2A(uid.GetBuffer()); 
	string pwd = CT2A(pw.GetBuffer());
	pApp->login(person(CString("yuzhimin"),uid,pw,0));
	//pApp->current=pApp->perlist[0];
	if(pApp->current!=NULL){
	SystemCate *p =new SystemCate;
	//yuzhimin yu;
	//yu.DoModal();
	pApp->save();
	p->DoModal();
	}
	else{
		mtext.SetWindowText(TEXT("Please Check your userid and password!"));
	}
}




void Cp4Dlg::OnBnClickedCancel()
{
	OnClose();
	CDialogEx::OnCancel();
}


void Cp4Dlg::OnStnClickedBox()
{
	// TODO: ÔÚ´ËÌí¼Ó¿Ø¼þÍ¨Öª´¦Àí³ÌÐò´úÂë
}
