#include<iostream>
using namespace std;
class Complex
{
	public:
		double real,imag;
		Complex(double r,double i){
			real =r,imag=i;
		}
		operator double()
		{
			real++,imag++;	
			return real;
		}	
};
int main()
{
	Complex a(1,2);
	int c=double(a);
	cout<<a.real<<" "<<a.imag<<endl;
}
