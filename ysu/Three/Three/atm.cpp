#include"atm.h"
#include<fstream>
#include<string>
#include<time.h>
#include<sstream>
atm::atm()
{
	readfile();
	this->current=NULL;
	//for(vector<card>::iterator it=alu.begin();it!=alu.end();it++)
	//{
	//	it->show();
	//}

}
void atm::readfile()
{
	ifstream ifs;
	alu.clear();
	ifs.open(FILENAME,ios::in);
	if(!ifs.is_open())
	{
		alu.push_back(credit("yuzhimin","1234","1234"));
	
	}
	else
	{
		string name,id,pw;
		int money,ty;
		while(ifs>>name && ifs>>id &&ifs>>pw &&ifs>>money && ifs>>ty)
		{
			if(ty==0)
			{
				alu.push_back(credit(name,id,pw,money,ty));
			}
			else
			{
				alu.push_back(debit(name,id,pw,money,ty));
			}
		}
	
	}
	ifs.close();
	//alu.clear();
	his.clear();
	ifs.open(HISFILE,ios::in);
	if(!ifs.is_open())
	{
		return;
	}
	else
	{
		string his,time,uid;
		while(ifs>>time && ifs>>uid &&ifs>>his)
		{
			this->his.push_back(history(time,uid,his));
		}
	}
}
void atm::showmenu()
{
	while(true)
	{	int choice;
		system("cls");
		if(this->current->type==0)
		{
				cout<<"Welcome to using credit card"<<" "<<this->current->name<<" money:"<<this->current->money<<endl
					//<<this->gettime()<<endl
					<<"1.withdraw"<<endl
					<<"2.despoit"<<endl
					<<"3.transfrom"<<endl
					<<"4.history"<<endl
					<<"5.changepwd"<<endl
					<<"0.quit"<<endl;
					cin>>choice;
	
				//system("pause");
		}
		else
		{
			cout<<"Welcome to using debit card"<<" "<<this->current->name<<" money:"<<this->current->money<<endl
				<<"1.withdraw"<<endl
				<<"2.despoit"<<endl
				<<"3.transfrom"<<endl
				<<"4.history"<<endl
				<<"5.changepwd"<<endl
				<<"0.quit"<<endl;
				cin>>choice;
			//system("pause");
		}
		
		switch(choice)
		{
		case 1:
			//withdraw
			this->withdraw();
			break;
		case 2:
			//despoist
			this->disposit();
			break;
		case 3:
			//transform
			this->tranfs();
			break;
		case 4:
			//history
			this->showhistory();
			break;
		case 5:
			//changepwd
			this->changepwd();
			break;
		case 0:
			//login
			this->login();
			break;
		default:
			system("cls");
		}
		if(choice==0)
		{
			return;
		}
	}

}
void atm::login()
{
	int times=3;
	card *lockc=NULL;
	while(times>0)
	{
		string id,pw;
		system("cls");
		cout<<"id:";
		cin>>id;
		if(id=="0")
		{
			return;
		}
		cout<<"pw:";
		cin>>pw;
		for(vector<card>::iterator it=alu.begin();it!=alu.end();it++)
		{
			if(it->uid==id && it->pwd==pw)
			{
				//it->show();
				this->current=& *it;
				this->showmenu();
			}
			if(it->uid==id && it->pwd!=pw)
			{
				lockc=&*it;
			}
			//it->show();
			//system("pause");
		}
		times--;
	}
	lockc->lock=true;

}

void atm::create()
{
	int choice;
	string name,pwd,uid;
	cout<<"Please select the type of card you want to apply:"<<endl
		<<"1.credit 2.debit"<<endl;
	cin>>choice;
	cout<<"Please input user name:";
	cin>>name;
	cout<<"Plesae input uid:";
	cin>>uid;
	find(uid);
	while(this->tran!=NULL)
	{
		cout<<"sorry ,the id have already existed!"<<endl
			<<"Plesae input uid:";
		cin>>uid;
		find(uid);
	}
	cout<<"Please input user password:";
	cin>>pwd;
	if(choice==1)
	{
		this->alu.push_back(credit(name,uid,pwd));
	}
	else
	{
		this->alu.push_back(debit(name,uid,pwd));
	}
	cout<<"Success!";
	system("pause");
	return;
}

void atm::disposit()
{
	int money;
	cout<<"Please input the amount you want to despoit:"<<endl;
	cin>>money;
	if(money<0)
	{
		cout<<"money can't be less zero";
		system("pause");
		return;
	}
	else
	{
		this->current->despoit(money);
		stringstream his1;
		his1<<" despoit_"<<money;
		string his2;
		his2=his1.str();
		
		this->his.push_back(history(gettime(),this->current->uid,his2));
	}
	
}

void atm::tranfs()
{
	string uid;
	cout<<"Please input the uid you want to trans:";
	cin>>uid;
	find(uid);
	if(this->tran==NULL)
	{
		cout<<"sorry,The uid is not in our bank"<<endl;
		system("pause");
		return;
	}
	else
	{
		int choice;
		//cout<<this->tran->name;
		cout<<"the ower of card id is "<<this->tran->name<<endl
			<<"are you sure?"<<endl
			<<"1.Yes"<<" "<<"2.No"<<endl;
		cin>>choice;
		if(choice==1)
		{
			int money;
			cout<<"please input the money you want to tranf:";
			cin>>money;
			if(this->current->money>money)
			{
				this->current->money-=money;
				this->tran->money+=money;
				stringstream his1;
				his1<<" tran_to_"<<this->tran->name<<"_"<<money;
				string his2;
				his2=his1.str();
				
				this->his.push_back(history(gettime(),this->current->uid,his2));
			}
			else if(this->current->type==0)
			{
				this->current->money-=money;
				this->tran->money+=money;
				stringstream his1;
				his1<<" tran_to_"<<this->tran->name<<"_"<<money;
				string his2;
				his2=his1.str();
				
				this->his.push_back(history(gettime(),this->current->uid,his2));
			}
			else
			{
				cout<<"Sorry ,Insufficient balance"<<endl;
				system("pause");
				return ;
			}
		}
	
	}

}
void atm::find(string uid)
{
	for(vector<card>::iterator it=alu.begin();it!=alu.end();it++)
	{
		//cout<<it->uid;
		if(it->uid==uid)
		{
			//cout<<it->uid;
			this->tran=& *it;
			return;
		}
	}
	this->tran=NULL;
	//cout<<"fail";
	//system("pause");
}
void atm::withdraw()
{
	int money;
	cout<<"Please input the money you want to withdraw:";
	cin>>money;
	if(this->current->type==0)
	{
		credit *m=(credit *)this->current;
		m->withdraw(money);
		stringstream his1;
		his1<<" withdraw_"<<money;
		string his2;
		his2=his1.str();
		this->his.push_back(history(gettime(),this->current->uid,his2));
		cout<<"success ,you have withdraw "<<money<<endl;
		system("pause");
	}
	else
	{
		debit *m=(debit *)this->current;
		if(!m->withdraw(money))
		{
			cout<<"Sorry ,Insufficient balance";
			system("pause");
			return;
		}
		cout<<"success ,you have withdraw "<<money<<endl;
		stringstream his1;
		his1<<" withdraw_"<<money;
		string his2;
		his2=his1.str();
		this->his.push_back(history(gettime(),this->current->uid,his2));
		system("pause");
		return;
	}

}
void atm::changepwd()
{
	string pw1,pw2;
	cout<<"Please input new pwd:";
	cin>>pw1;
	cout<<"Please input new pwd again:";
	cin>>pw2;
	if(pw1==pw2)
	{
		this->current->changepwd(pw1);
		cout<<"success"<<endl;
		system("pause");
		return;
	}
	else
	{
		cout<<"The two passwords are inconsistent"<<endl;
		system("pause");
		return;
	}

}
atm::~atm()
{

	this->save();

}
void atm::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);
	for(vector<card>::iterator it=alu.begin();it!=alu.end();it++)
	{
		ofs<<it->name<<" "
			<<it->uid<<" "
			<<it->pwd<<" "
			<<it->money<<" "
			<<it->type<<'\n';
	}
	ofs.close();
	ofs.open(HISFILE,ios::out);
	for(vector<history>::iterator it=his.begin();it!=his.end();it++)
	{
		ofs<<it->time<<" "
			<<it->uid<<" "
			<<it->his<<'\n';
	}
	ofs.close();
}

void atm::showhistory()
{
	for(vector<history>::iterator it=his.begin();it!=his.end();it++)
	{
		if(it->uid==this->current->uid)
		{
			cout<<it->time<<it->his<<endl;
		}

	}
	system("pause");
	return;
}
string atm::gettime()
{
	time_t t = time(NULL);
	tm *pt = localtime(&t);
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