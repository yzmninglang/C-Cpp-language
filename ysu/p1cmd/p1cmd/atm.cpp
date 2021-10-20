#include "atm.h"
#include<iostream>
#include<string>
using namespace std;


void atm::login()
{
	string id,pw;
	cout<<"Please input your userid:"<<endl;
	cin>>id;
	cout<<"Please input your password:"<<endl;
	cin>>pw;
	if(id==pw){
	cout<<"you have sucess!";
	}

}