#include<iostream>
using namespace std;
class Complex{
    public:
    	double real;
    	double imag;
    	Complex(double r=0,double i=0){
            real =r;
            imag =i;
        }
};
Complex operator+(Complex a,Complex b)
{
	Complex temp;
	temp.imag=a.imag+b.imag;
	temp.real=a.real+b.real;
	return temp;
}
int main()
{
	Complex com1(1,2),com2(2,3),total1,total2;
	total1=com1+com2;
	total2=operator+(com1,com2);
	cout<<total1.real<<" "<<total2.real;
	return 0;
	
}
