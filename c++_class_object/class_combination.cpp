#include<iostream>
using namespace std;
class A{
	public:
		A(int x1,int y1){
			x = x1;
			y = y1;
		}
		void show(){
			cout<<"\n x="<<x<<"\n y="<<y;
		}
		private:
			int x;
			float y;
};
class B{
	public:
		B(int x1,float y1,int z1):a(x1,y1){
			z = z1;
		}
		void show(){
			a.show();
			cout<<"\n z="<<z;
		}
	private:
		A a;
		int z;
};

int main(){
	B b(1,1.3,4);
	b.show();
	return 0;
}
