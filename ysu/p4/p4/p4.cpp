
// p4.cpp : 定义应用程序的类行为。
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



// Cp4App 构造

Cp4App::Cp4App()
{

	// 支持重新启动管理器
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: 在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
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


// 唯一的一个 Cp4App 对象

Cp4App theApp;


// Cp4App 初始化

BOOL Cp4App::InitInstance()
{
//TODO: call AfxInitRichEdit2() to initialize richedit2 library.
	// 如果一个运行在 Windows XP 上的应用程序清单指定要
	// 使用 ComCtl32.dll 版本 6 或更高版本来启用可视化方式，
	//则需要 InitCommonControlsEx()。否则，将无法创建窗口。
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// 将它设置为包括所有要在应用程序中使用的
	// 公共控件类。
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// 创建 shell 管理器，以防对话框包含
	// 任何 shell 树视图控件或 shell 列表视图控件。
	CShellManager *pShellManager = new CShellManager;

	// 标准初始化
	// 如果未使用这些功能并希望减小
	// 最终可执行文件的大小，则应移除下列
	// 不需要的特定初始化例程
	// 更改用于存储设置的注册表项
	// TODO: 应适当修改该字符串，
	// 例如修改为公司或组织名
	SetRegistryKey(_T("应用程序向导生成的本地应用程序"));

	Cp4Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: 在此放置处理何时用
		//  “确定”来关闭对话框的代码
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: 在此放置处理何时用
		//  “取消”来关闭对话框的代码
	}

	// 删除上面创建的 shell 管理器。
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// 由于对话框已关闭，所以将返回 FALSE 以便退出应用程序，
	//  而不是启动应用程序的消息泵。
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

