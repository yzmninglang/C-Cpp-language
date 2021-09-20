#include<iostream>
using namespace std;
class Base{
	public:
		void setxy(int m,int n){
			x = m;
			y = n;
		}
		void showxy(){
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
	private:
		int x;
	protected:
		int y;
};
class Derieve1:protected Base{
	public:
		void setxyz(int m, int n ,int l){
			setxy(m,n);
			z=l;
		}
		void showxyz(){
//			cout<<"x="<<x<<endl;
//			cout<<"y="<<y<<endl;
			showxy();
			cout<<"z="<<z<<endl;
		}
	private:
		int z;
};
int main(){
	Derieve1 opt1;
	opt1.setxyz(1,2,3);
	Base opt2;
	opt2.setxy(7,8);
	opt1.showxyz();
	opt2.showxy();
//	cout<<"protected:"<<opt2.y<<endl;
	return 0;
}
