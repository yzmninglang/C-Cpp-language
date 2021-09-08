#include<iostream>
#include<string>
using namespace std;
class boy;
class girl{
	public:
		girl(string n,int a){
			name = n;
			age = a;
		}
		friend void prdata(const girl &,const boy &);
	private:
		string name;
		int age;
};
class boy{
	public:
		boy(string n,int a){
			name = n;
			age = a;
		}
		friend void prdata(const girl &,const boy &);
	private:
		string name;
		int age;
};
void prdata(const girl &plg,const boy &plb)
{
	cout<<"name :"<<plg.name<<" girl"<<" age:"<<plg.age;
	cout<<"name :"<<plb.name<<" boy"<<" age:"<<plb.age;
	
}
int main(){
	girl g1("nihao",17);
	boy b1("xiaoming",15);
	prdata(g1,b1);
	return 0;
}
