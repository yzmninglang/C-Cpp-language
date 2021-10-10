#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void test1(){
	ifstream ifs;
	ifs.open("./1.txt",ios::in);
	if(!ifs.is_open()){
		cout<<"file open fail!"<<endl;
		return;
	}
	
	
//	char buf[1024]={0};
//	while(ifs>>buf){
//		cout<<buf<<endl;
//	}
//	ifs.close();
	
	
//	char buf[1024]={0};
//	while(ifs.getline(buf,sizeof(buf))){
//		cout<<buf<<endl;	
//	}

//	string buf;
//	while(getline(ifs,buf)){
//		cout<<buf<<endl;
//	}

	char c;
	while((c=ifs.get()) !=EOF){
		cout<<c;
	}
}
int main(){
	test1();
	return 0;
}
