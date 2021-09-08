#include<iostream>
using namespace std;
class myclass{
	public:
		static int i;
		int geti(){
			return i;
		}
};
int myclass::i=0;
int main(){
	myclass::i=200;
	myclass ob1,ob2;
	cout<<"ob1="<<ob1.i<<" "<<"ob2="<<ob2.i;
	return 0;
}
