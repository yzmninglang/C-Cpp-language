#include<iostream>
using namespace std;
class Complex{
	public:
		Complex(double r=0,double i=0){
			real = r,imag = i;
		}
		friend Complex operator+(Complex com ,int a){
			return Complex (com.real+a,com.imag);
		}
		friend Complex operator+(int a ,Complex com){
			return Complex(a+com.real,com.imag);
		}
		void show(){
			cout<<"real="<<real<<" "<<"imag="<<imag<<endl;
		}
	private:
		double real,imag;
};

int main(){
	Complex com1(30,40),com2,com3;
	com2 = com1 +3;
	com3 = 67+com2;
	com1.show();
	com2.show();
	com3.show();
	return 0;
}
