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
	//Complex com[3]={{1.1,2.2},{3.4,4.2},{5.6,4.7}};
	Complex com[3]={
	Complex(1.1,2.3),
	Complex(4.5,7.8),
	Complex(8.9,4.5)
	};
	for(int i =0;i<3;i++){
		cout<<com[i].abs()<<' ';
	}
	return 0;
}
