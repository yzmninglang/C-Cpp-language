#include<iostream>
#include<string>
using namespace std;
class Complex{
	public:
		double real,imag;
		Complex(double r=0,double i =0){
			real =r;
			imag =i;
		}
};
Complex operator+(Complex op1,Complex op2){
	Complex re(op1.real+op2.real,op1.imag+op2.imag);
	return re;
}

int main(){
	Complex a1(1,2);
	Complex a2(2,3);
	Complex a3=a1+a2;
	cout<<a3.real<<","<<a3.imag;
	return 0;
}
