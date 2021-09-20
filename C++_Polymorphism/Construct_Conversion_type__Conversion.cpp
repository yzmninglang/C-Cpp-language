#include<iostream>
using namespace std;
class Complex{
	public:
		Complex(){}
		Complex(int r,int i){
			real = r;
			imag = i;
		}
		Complex(int i){
			real = imag = i/2;
		}
		operator double(){
			return real+imag;
		}
		void print(){
			cout<<"real:"<<real<<"\t"<<"imag:"<<imag<<endl;
		}
	private:
		int real ,imag;
};

int main(){
	Complex a1(1,2),a2(2,3);
	Complex a3;
	a3 = a1+a2;
	a3.print();
	return 0;
}
