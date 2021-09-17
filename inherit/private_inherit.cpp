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
	private:
		int x;
};
class Derived:private Base{
	public:
		void setxy(int n , int m){
			setx(n);
			y =m;
		}
		void showxy(){
			cout<<x;
			cout<<y<<endl;
		}
	private:
		int y;
};
int main(){
	Derived obj;
	obj.setx(10);
	obj.showxy();
	return 0;
}
