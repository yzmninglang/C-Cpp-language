#include<iostream>
using namespace std;
class Complex{
	public:
		Complex(){}
		Complex(double r,double i):real(r),imag(i){}
		Complex(double r):real(r),imag(0){}
		friend Complex operator+(Complex,Complex);
		operator double(){
			return real;
		}
		void print();
	protected:
		double real,imag;
};
Complex operator+(Complex a,Complex b){
	return Complex(a.real+b.real,a.imag+b.imag);
}
void Complex::print(){
	cout<<real<<'+'<<imag<<'i'<<endl;
}
int main(){
	Complex a1(1,2),b,c(1),d;
	b = a1+2;  //
	d = a1+c;
	b.print();
	d.print();
	cout<<double(d)<<endl;
	return 0;
}
