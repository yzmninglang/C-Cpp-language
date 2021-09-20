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
			cout<<"Destructor called--"<<ptr<<endl;
			delete ptr; 
		}
	private:
		char *ptr;
};

int main(){
	STRING p1("nihao");
	STRING p2("bucuo");
	p2 = p1 ;
	return 0;
}
