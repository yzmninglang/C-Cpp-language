#include<iostream>
#include<cmath>
using namespace std;
class Shape{
	public:
		Shape(double x){
			r =x;
		}
		virtual void Perimeter()=0;
		virtual void Area()=0;
	protected:
		double r;
};

class InSquare:public Shape{
	public:
		InSquare(double x):Shape(x){
			a= x*sqrt(2);
		};
		void Perimeter(){
			cout<<"The Perimeter of Insquare of circle is "<<a*4<<endl;
		}
		void Area(){
			cout<<"The area of insquare of circle is "<<a*a<<endl;
		}
	protected:
		double a;
};

class OutSquare:public Shape{
	public:
		OutSquare(double x):Shape(x){
			a = x*2;
		}
		void Perimeter(){
			cout<<"The Perimeter of outsquare of circle is "<<a*4<<endl;
			
		}
		void Area(){
			cout<<"The area of outsquare of circle is "<<a*a<<endl;
		}
	protected:
		double a;
};

int main(){
	Shape *p;
	InSquare q(1.4);
	OutSquare q1(3.4);
	p = &q;
	p->Area();
	p->Perimeter();
	p = &q1;
	p->Area();
	p->Perimeter();
	return 0;
}
