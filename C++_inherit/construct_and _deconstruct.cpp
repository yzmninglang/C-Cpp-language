#include<iostream>
using namespace std;
class A{
	public:
		A(int i){
			cout<<"Base class constructing :"<<i;
		}
		~A(){
			cout<<"Base class deconstructing \n";
		}
};

class B:public A{
	public:
		B(int i ,int m):A(i),c(m){
			cout<<"derieve class constructing\n";
		}
		~B(){
			cout<<"derieve class deconstructing\n";
		}
	private:
		A c;
};

int main(){
	B opt1(1,3);
	return 0;
}
