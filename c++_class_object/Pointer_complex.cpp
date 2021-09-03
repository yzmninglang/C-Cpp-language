#include<iostream>
#include<cmath>
using namespace std;
class Complex{
	public:
		Complex(double r,double i){
			real =r ,imag =i;
		}
		double abs(){
			double t;
			t = real*real + imag*imag;
			return sqrt(t);
		}
	private:
		double real;
		double imag;
};
int main(){
	Complex *pa =new Complex(1.2,3.4);
	cout<<"the complex's abs is "<<pa->abs()<<endl;
	return 0;
}
