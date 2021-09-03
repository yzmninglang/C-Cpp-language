#include<iostream>
#include<cmath>

using namespace std;
class Complex{
	private:
		double real;
		double imag;
	public:
		void init(double r,double i){
			real=r;imag = i;
		}
		double abs()
		{
			return sqrt(real*real+imag*imag);
		}
};

int main(){
	Complex A;
	A.init(1.2,3.4);
	cout<<"The complex number A's abs ="<<A.abs()<<endl;
	return 0;
}
