#include<iostream>
using namespace std;
class Figure{
	public:
		Figure(double a ,double b){
			x=a;y=b;
		}
		virtual void area(){
			cout<<"Fun defined in base class.";
		}
	protected:
		double x,y;
};

class Triangle:public Figure{
	public:
		Triangle(double a,double b):Figure(a,b){
		}
		void area(){
			cout<<"Triangle's height and button is "<<x<<','<<y<<endl;
			cout<<"Area of Triangle is "<<x*y*0.5<<endl;
		}
};
class Circle:public Figure{
	public:
		Circle(double ai):Figure(ai,ai){
			a= ai;
		}
		void area(){
			cout<<"Circle's area is "<<a*a*3.14<<endl;
		}
	protected:
		double a;
};

int main(){
	Figure *p;
	Triangle t(10,6);
	Circle r(7);
	p = &t;
	p->area();
	p = &r;
	p->area();
	return 0;
}
