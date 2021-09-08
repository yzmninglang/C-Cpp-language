#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="ABC";
	string s2="EFG";
	string s3("OPK");
	string s4,s5;
	s4 = s1 ;
	s5 = s1+s2;
	cout<<"s1+s2 is "<<s5<<endl;
	cout<<"s1+\"123\" is "<<s1+"123"<<endl;
	if(s3>s1){
		cout<<"s3>s1"<<endl;
	}
	else cout<<"s3<s1"<<endl;
	if(s4==s1){
		cout<<"s4=s1"<<endl;
	}
	cout<<"Please input s5:";
	cin>>s5;
	cout<<"\n"<<s5;
	return 0;
}
