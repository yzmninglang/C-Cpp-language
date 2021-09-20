#include<iostream>
using namespace std;
class A{
	public:
		A(int i){
			cout<<"Base class constructing :";
			x = i;
		}
		~A(){
			cout<<"Base class deconstructing \n";
		}
		setx(int i){
			x = i;
		}
	private:
		int x;
};

int main(){
	A c;
	c.setx(i)
	return 0;
}
