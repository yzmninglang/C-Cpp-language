#include<iostream>
#include<cmath>
using namespace std;
class Complex{
	public:
		Complex(double r=0,double i=0);
		~Complex();
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
Complex::~Complex(){
	cout<<"The constructor have been destoryed"<<endl;
}
int main(){

	Complex s3(1.1,3.4);
	cout<<"s3="<<s3.abs()<<endl;
	cout<<"nihao"<<endl;
	return 0;
}
