#include<iostream>
using namespace std;
class complex{
	public:
		complex(double r,double i){
			real = r;
			imag = i;
		}
		complex(){
		}
		void dis()
		{
			cout<<real<<" "<<imag<<endl;
		}
		friend complex operator+(complex a,complex b);
		friend complex operator-(complex a,complex b);
	private:
		double real,imag;
};
complex operator+(complex a,complex b)
{
	return complex(a.real+b.real,a.imag+b.imag);	
}
complex operator-(complex a,complex b)
{
	return complex(a.real-b.real,a.imag-b.imag);
}
int main()
{
	complex a(1,2.2),b(2.2,3),c;
	c=a-b;
	c.dis();
	
	
}
