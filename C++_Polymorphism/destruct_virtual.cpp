#include<iostream>
using namespace std;
class B{
	public:
		virtual ~B(){
			cout<<"Call Base B ";
		}
};

class D:public B{
	public:
		~D(){
			cout<<"change derieve D's function";
		}
};
int main(){
	B *p;
	p =new D;
	delete p;
	return 0;
}
