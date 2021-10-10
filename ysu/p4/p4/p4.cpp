
// p4.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "p4.h"
#include "p4Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cp4App

BEGIN_MESSAGE_MAP(Cp4App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()



// Cp4App ����

Cp4App::Cp4App()
{

	// ֧����������������
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
	//person *p1=new person(CString("yuzhimin"),CString("1234"),CString("1234"),100);
	//person *p2=new person(CString("zhangtuo"),CString("12345"),CString("12345"),1000);
	//person *p3=new person(CString("xiaohuang"),CString("54321"),CString("54321"),1000);
	//num =3;
	//perlist=new person*[num];
	//perlist[0]=p1;
	//perlist[1]=p2;
	//perlist[2]=p3;
	get_num();
	load();
}
void Cp4App::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);
	for(int i=0;i<this->num;i++){
		ofs<<CT2A(this->perlist[i]->name.GetBuffer())<<" "
			<<CT2A(this->perlist[i]->uid.GetBuffer())<<" "
			<<CT2A(this->perlist[i]->pwd.GetBuffer())<<" "
			<<this->perlist[i]->money<<" "<<endl;
	}
	ofs.close();
}


// Ψһ��һ�� Cp4App ����

Cp4App theApp;


// Cp4App ��ʼ��

BOOL Cp4App::InitInstance()
{
//TODO: call AfxInitRichEdit2() to initialize richedit2 library.
	// ���һ�������� Windows XP �ϵ�Ӧ�ó����嵥ָ��Ҫ
	// ʹ�� ComCtl32.dll �汾 6 ����߰汾�����ÿ��ӻ���ʽ��
	//����Ҫ InitCommonControlsEx()�����򣬽��޷��������ڡ�
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ��������Ϊ��������Ҫ��Ӧ�ó�����ʹ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// ���� shell ���������Է��Ի������
	// �κ� shell ����ͼ�ؼ��� shell �б���ͼ�ؼ���
	CShellManager *pShellManager = new CShellManager;

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO: Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	Cp4Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȷ�������رնԻ���Ĵ���
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȡ�������رնԻ���Ĵ���
	}

	// ɾ�����洴���� shell ��������
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}


void Cp4App::login(person p)
{
	for(int i=0;i<num;i++){
		if(p.uid==this->perlist[i]->uid && p.pwd==this->perlist[i]->pwd)
		{
			this->current=perlist[i];
			break;
		}
		else{

			this->current=NULL;
		}

	}
}


Cp4App::~Cp4App(){
	this->save();
}


bool Cp4App::withd(int m)
{
	if(this->current->money>m)
	{
		current->money=current->money-m;
		return true;
	}
	else
	{
		return false;
	}
}


int Cp4App::find(CString id)
{
	for(int i=0;i<this->num;i++)
	{
		if(this->perlist[i]->uid==id)
		{
			return i;
		}
	}
	return -1;
}
bool Cp4App::trans(int index,int money)
{
	if(this->current->money-money<0)
	{
		return false;
	}
	this->current->money-=money;
	this->perlist[index]->money+=money;
	return true;
}
void Cp4App::load()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	if(!ifs.is_open())
	{
		this->num=1;
		this->perlist= new person*[1];
		person *pp=new person(CString("yuzhimin"),CString("1234"),CString("1234"),100);
	}
	else
	{
		string name,id,pw;
		string money;
		int index=0;
		while(ifs>>name && ifs>>id &&ifs >>pw &&ifs>>money)
		{
			person *p=new person;
			p->name=name.c_str();
			p->money=int(atoi(money.c_str()));
			p->pwd=pw.c_str();
			p->uid=id.c_str();
			this->perlist[index]=p;
			index++;
		}

	}
	ifs.close();
}
void Cp4App::get_num()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	string name,id,pw;
	string money;
	int index=0;
	while(ifs>>name && ifs>>id &&ifs >>pw &&ifs>>money)
	{
		index++;
	}
	ifs.close();
	this->num=index;
	perlist=new person *[this->num];
}

