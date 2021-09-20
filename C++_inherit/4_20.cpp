#include<iostream>
#include<cmath>
using namespace std;
class area_c{
	protected:
		double height,width;
	public:
		area_c(double h,double w){
			height=h;
			width=w;
		}
		virtual double area()=0;
};

class rectangle:virtual public area_c{
	public:
		rectangle(double h,double w):area_c(h,w){
		}
		double area(){
			return height*width;
		}
};

class isosceles:virtual public area_c{
	public:
		isosceles(double A,double B,double C):area_c(0,0){
			a=A,b=B,c=C;
		}
		double area(){
			int p = (a+b+c)/2;
			double s=sqrt(p*(p-a)*(p-b)*(p-c));
			return s;
		}
	protected:
		double a,b,c;
}; 

int main(){
	rectangle r1(1.5,2.3);
	cout<<"rectangle:"<<r1.area()<<endl;
	isosceles i1(3,4.4,4);
	cout<<"isosceles:"<<i1.area()<<endl;
}
