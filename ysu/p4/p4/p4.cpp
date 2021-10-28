

#include "stdafx.h"
#include "p4.h"
#include "p4Dlg.h"
#include<sstream>
#include<time.h>
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

	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

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
	ofs.open(HISFILE,ios::out);
	for(vector<history>::iterator it=his.begin();it!=his.end();it++)
	{
		ofs<<it->time<<" "
			<<it->uid<<" "
			<<it->his<<" "
			<<it->money<<'\n';
	}
	ofs.close();
}

string Cp4App::gettime()
{
	time_t t22 = time(NULL);
	tm *pt = localtime(&t22);
	int day = pt->tm_mday;
	int hour = pt->tm_hour;
	int minute = pt->tm_min;
	int month = pt->tm_mon+1;
	int year = pt->tm_year+1900;
	stringstream time;
	time<<year<<"-"<<month<<"-"<<day<<"-"<<hour<<":"<<minute;
	string time1;
	time1=time.str();
	return time1;
}


Cp4App theApp;




BOOL Cp4App::InitInstance()
{

	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);

	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	CShellManager *pShellManager = new CShellManager;

	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	Cp4Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{

	}
	else if (nResponse == IDCANCEL)
	{

	}


	if (pShellManager != NULL)
	{
		delete pShellManager;
	}


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
	string his="trans_to_";
	his = his +this->perlist[index]->name.GetString();
	this->his.push_back(history(gettime(),this->current->uid.GetString(),his,money));
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
			p->money=float(atoi(money.c_str()));
			p->pwd=pw.c_str();
			p->uid=id.c_str();
			this->perlist[index]=p;
			index++;
		}

	}
	ifs.close();


	//history load 
	his.clear();
	ifs.open(HISFILE,ios::in);
	if(!ifs.is_open())
	{
		return;
	}
	else
	{
		string his,time,uid;
		double money;
		while(ifs>>time && ifs>>uid &&ifs>>his && ifs>>money)
		{
			this->his.push_back(history(time,uid,his,money));
		}
	}
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

void Cp4App::create(person *p)
{
	person **list = new person *[this->num+1];
	for(int i =0;i<this->num;i++)
	{
		list[i]=this->perlist[i];
	}
	list[this->num]=p;
	this->perlist=list;
	this->num++;
}
