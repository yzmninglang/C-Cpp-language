// yuzhimin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "p4.h"
#include "yuzhimin.h"
#include "afxdialogex.h"


// yuzhimin �Ի���

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


// yuzhimin ��Ϣ�������


void yuzhimin::OnBnClickedOk()
{
	
	CDialogEx::OnOK();
}
