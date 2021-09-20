#include<iostream>
using namespace std;
class Complex{
	public:
		Complex(double x=0,double y=0){
			real = x,imag = y;
		}
		void disp(){
			cout<<"real:"<<real<<" "<<"imag:"<<imag<<endl;
		}
		friend Complex operator+(Complex com1,Complex com2);
		friend Complex operator-(Complex com1,Complex com2);
	protected:
		double real ,imag ;
};
Complex operator+(Complex com1,Complex com2){
	return Complex(com1.real+com2.real,com1.imag+com2.imag);
}
Complex operator-(Complex com1 ,Complex com2){
	return Complex(com1.real-com2.real,com1.imag-com2.imag);
}

int main(){
	Complex a1(2.5,3.7);
	Complex a2(4.2,6.5);
	Complex a3;
	a3 = a1-a2;
	a3.disp();
	a3 = a1+a2;
	a3.disp();
	return 0;
}
