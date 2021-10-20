#include<iostream>
#include "atm.h"
using namespace std;



int main()
{
	atm app;
	while(true){
		int choice;
		system("cls");
		cout<<"1.login"<<endl
			<<"2.register"<<endl
			<<"0.quit"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			app.login();
			//login
			break;
		case 2:
			//register
			app.create();
			break;
		case 0:
			//quit
			cout<<"see you"<<endl;
			system("pause");
			return 0;
		default :
			system("cls");
	}
	}
}