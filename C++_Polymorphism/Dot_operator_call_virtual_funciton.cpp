#include<iostream>
using namespace std;
class B0{
	public:
		virtual void print(char *p){
			cout<<p<<"print()"<<endl;
		}
};

class B1:public B0{
	public:
		virtual void print(char *p){
			cout<<p<<"print()"<<endl;
		}
};

class B2:public B1{
	public:
		virtual void print(char *p){
			cout<<p<<"print()"<<endl;
		}
};

int main(){
	B0 ob0;
	ob0.print("nihao::");
	B1 ob1;
	ob1.print("bucuo::");
	return 0;
	
}
