#include<iostream>
#include<string>
using namespace std;
class worker{
	public:
		virtual void showid()=0;
		virtual string getname()=0;
		string name;
		int id;
};

class person:public worker{
	public:
		person(string iname,int iid){
			name = iname;
			id =iid;
		}
		virtual void showid();
		virtual string getname();
};


void person::showid(){
	cout<<id<<endl;
}

string person::getname(){
	return name;
}


int main(){
	worker *p=NULL;
	p= new person("yuzhimin",2019);
	p->showid();
	cout<<p->getname()<<endl;
	
	
}
