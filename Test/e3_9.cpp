#include<iostream>
using namespace std;
class A{
	public:
	A(int x1,int y1){
		x=x1;y=y1;
	}
	void dis()
	{
		cout<<x<<" "<<y<<endl;
	}
	private:
		int x,y;
};
class B{
	public:
		B(int x1,int y1,int z1);
		void dis();
	private:
		int z;
		A a;
};
B::B(int x1,int y1,int z1):a(x1,y1),z(z1){
	
}
void B::dis(){
	a.dis();
	cout<<z<<endl;
}

int main()
{
	B b(1,23,4);
	b.dis();
}
