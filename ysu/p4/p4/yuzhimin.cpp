// yuzhimin.cpp : 实现文件
//

#include "stdafx.h"
#include "p4.h"
#include "yuzhimin.h"
#include "afxdialogex.h"


// yuzhimin 对话框

IMPLEMENT_DYNAMIC(yuzhimin, CDialogEx)

yuzhimin::yuzhimin(CWnd* pParent /*=NULL*/)
	: CDialogEx(yuzhimin::IDD, pParent)
{

}

yuzhimin::~yuzhimin()
{
}

void yuzhimin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(yuzhimin, CDialogEx)
	ON_BN_CLICKED(IDOK, &yuzhimin::OnBnClickedOk)
END_MESSAGE_MAP()


// yuzhimin 消息处理程序


void yuzhimin::OnBnClickedOk()
{
	
	CDialogEx::OnOK();
}
