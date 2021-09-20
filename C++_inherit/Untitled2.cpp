#include<iostream>
using namespace std;
class Base{
	public:
		void setx(int n){
			x = n;
		}
		void showx(){
			cout<<x<<endl;
		}
		int getx(){
			return x;
		}
	private:
		int x;
};
class Derieved: private Base{
	public:
		void setxy(int n ,int m){
			setx(n);
			y = m;
		}
		void showxy(){
			cout<<getx()<<endl;
			cout<<y<<endl;
		}
	private:
		int y;
};

int main(){
	Derieved opt1;
//	opt1.setx(1);
	opt1.setxy(1,2);
	opt1.showxy();
	return 0;
}

