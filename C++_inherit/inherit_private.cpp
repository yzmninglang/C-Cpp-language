#include<iostream>
using namespace std;
class  Base{
	public:
		void seta(int sa){
			a = sa;
		}
		void showa(){
			cout<<"a="<<a<<endl;
		}
	protected:
		int a;
};
class Derieve1:private Base{
	public:
		void setab(int m, int n){
			a = m;
			b = n;
		}
		void showab(){
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
	protected:
		int b;
};
class Derieve2:private Derieve1{
	public:
		void setabc(int sa ,int sb ,int sc){
			setab(sa,sb);
			c = sc;
		}
		void showabc(){
			showab();
			cout<<"c="<<c<<endl;
		}
	private:
		int c;
};

int main(){
	Base opt1;
	opt1.seta(1);
	Derieve1 opt2;
	opt2.setab(1,2);
	Derieve2 opt3;
	opt3.setabc(3,4,5);
	opt1.showa();
	opt2.showab();
	opt3.showabc();
	return 0;
	
}
