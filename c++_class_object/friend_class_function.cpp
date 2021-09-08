#include<iostream>
#include<string>
using namespace std;
class boy;
class girl;
class boy{
	public:
		boy(string n,int a){
			name = n;
			age = a;
		}
		void dis(girl &);
	private:
		string name;
		int age;
};
class girl{
	public:
		girl(string n,int a){
			name = n;
			age = a;
		}
		friend boy;
	private:
		string name;
		int age;
};

void boy::dis(girl &x){
	cout<<"girl's name:"<<x.name<<" "<<"girl age:"<<x.age;
}
int main(){
	girl g1("nihao",17);
	boy b1("xiaoming",15);
	b1.dis(g1);
	return 0;
}
