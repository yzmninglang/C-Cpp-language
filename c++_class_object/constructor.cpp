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
	Complex A(1.1,2.2);
	cout<<"A's abs is "<<A.abs()<<endl;
	return 0;
}
