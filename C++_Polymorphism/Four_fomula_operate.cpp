#include<iostream>
using namespace std;
class Complex{
	public:
		Complex(double r=0,double i=0);
		void print();
		friend Complex operator+(Complex &a,Complex &b);
		friend Complex operator-(Complex &a,Complex &b);
		friend Complex operator*(Complex &a,Complex &b);
		friend Complex operator/(Complex &a,Complex &b);
	protected:
		double real,imag;
};
Complex::Complex(double r,double i){
	real = r,imag = i;
}
Complex operator-(Complex &a,Complex &b){
	Complex c(a.real-b.real,a.imag-b.imag);
	return c;
}
Complex operator+(Complex &a,Complex &b){
	Complex c(a.real+b.real,a.imag+b.imag);
	return c;
}
Complex operator*(Complex &a,Complex &b){
	Complex c(a.real*b.real-a.imag*a.imag,a.real*b.imag+a.imag*b.real);
	return c;
}
Complex operator/(Complex &a,Complex &b){
	Complex c((a.real*b.real+a.imag*b.imag)/(b.real*b.real+b.imag*b.imag),
	(a.imag*b.real-a.real*b.imag)/(b.real*b.real+b.imag*b.imag));
	return c;
} 
void Complex::print(){
	cout<<real<<","<<imag<<endl;
}
int main(){
	Complex A1(1.3,45.5);
	Complex B1(22.3,34.5);
	(A1*B1).print();
	return 0;
}

