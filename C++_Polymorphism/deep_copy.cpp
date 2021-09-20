#include<iostream>
#include<string.h>
using namespace std;
class STRING{
	public:
		STRING(char *s){
			cout<<"Constructor called"<<endl;
			ptr = new char[strlen(s)+1];
			strcpy(ptr,s);
		}
		~STRING(){
			cout<<"Destructor called,-----"<<ptr<<endl;
			delete ptr;
		}
		STRING &operator=(const STRING &s);
	private:
		char *ptr;
};

STRING &STRING::operator=(const STRING &s){
	if(this==&s){
	}else{
		delete ptr;
		ptr = new char[strlen(s.ptr)+1];
		strcpy(ptr,s.ptr);
	}
}

int main(){
	STRING p1("book");
	STRING p2("xihu");
	p2 = p1;
	return 0;
}
