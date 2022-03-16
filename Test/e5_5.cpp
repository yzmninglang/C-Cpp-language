#include<iostream>
using namespace std;
class x{
	public:
		x(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
		void print()
		{
			cout<<real<<endl;
		}
		x operator*(x ob);
	private:
		int real;
		int imag;
};
x x::operator*(x ob)
{
	real=real*ob.real;
	imag=imag*ob.imag;
}
int main()
{
	int x=0,y=3,z,t;
	t=--y*4;
	z=x--;
	cout<<t<<" "<<z;
	
}
