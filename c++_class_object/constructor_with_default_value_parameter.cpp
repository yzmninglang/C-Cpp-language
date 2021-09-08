#include<iostream>
#include<cmath>
using namespace std;
class Complex{
	public:
		Complex(double r=0,double i=0);
		double abs();
	private:
		double real,imag;
};
Complex::Complex(double r,double i){
	real = r,imag = i;
}
double Complex::abs(){
	double t;
	t=real*real+imag*imag;
	return sqrt(t);
}
int main(){
	Complex s1;
	Complex s2(1.1);
	Complex s3(1.1,3.4);
	cout<<"s1="<<s1.abs()<<endl;
	cout<<"s2="<<s2.abs()<<endl;
	cout<<"s3="<<s3.abs()<<endl;
	return 0;
}
