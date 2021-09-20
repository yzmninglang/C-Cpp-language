#include<iostream>
using namespace std;
class Base{
	public:
		int z;
		void setx(int i){
			x = i;
		}
		int getx(){
			return x;
		}
	private:
		int x;
	protected:
		int y;
};
class Derieve:protected Base{
	public:
		int p;
		void setall(int a,int b,int c,int e,int f){
			setx(a);
			y = b;
			z = c;
			m = e;
			n = f;
		}
		void show()
		{
			cout<<"x,y,z,m,n="<<getx()<<" "<<y<<" "<<z<<" "<<m<<" "<<n<<endl;
		}
	private:
		int m;
	protected:
		int n;
};

int main(){
	Derieve opt1;
	opt1.setall(1,2,3,4,5);
//	Base opt2;
	opt1.show();
	return 0;
	
}
