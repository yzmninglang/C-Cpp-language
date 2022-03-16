#include<iostream>
#include<string.h>
using namespace std;
class String{
	public:
		String(char *s){
			ptr=new char[strlen(s)+1];
			strcpy(ptr,s);
			cout<<"construct"<<endl;
		}
		~String(){
			cout<<"deconstruct"<<" "<<ptr<<endl;
			delete ptr;
		}
		String &operator=(const String &x);
	private:
		char *ptr;
};

String &String::operator=(const String &x)
{
	ptr=new char[strlen(x.ptr)+1];
	strcpy(ptr,x.ptr);
	return *this;
}
int main()
{
	String p1("yuzhimin"),p2("nihao");
	p1=p2;
}
