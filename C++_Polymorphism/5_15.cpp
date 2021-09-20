#include<iostream>
#include<string.h>
using namespace std;
class words{
	public:
		words(char *s){
			str=new char[strlen(s)+1];
			strcpy(str,s);
			len=strlen(s);
		}
		void disp();
		char operator[](int n);
	private:
		int len;
		char *str;
};
char words::operator[](int n){
	if(n>=len||n<0){
		cout<<"Please check again"<<endl;
		return ' ';
	}else{
		cout<<*(str+n);
	}
}

void words::disp(){
	cout<<str<<endl;
}

int main(){
	words w("This is C++book.");
	w.disp();
	cout<<"first char:";
	w[0];
	cout<<"16th char:";
	w[15];
	cout<<"26 char:";
	w[25];
	return 0;
}
