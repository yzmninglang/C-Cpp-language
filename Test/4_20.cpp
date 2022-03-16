#include<iostream>
using namespace std;
class area_cl{
	protected:
		double height;
		double width;
	public:
		area_cl(double r,double s)
		{
			height = r;
			width = s;
		}
		virtual double area()=0;
};
class rectangle:public area_cl{
	public:
		rectangle(double a,double b):area_cl(a,b){
		}
		double area();
};
class isosceles:public area_cl{
	public:
		isosceles(double a,double b):area_cl(a,b){
			
		}
		double area();
};
double rectangle::area(){
	return height*width;
}
double isosceles::area(){
	return 0.5*height*width;
}
int main()
{
	rectangle a(1,3);
	isosceles b(2,43.4);
//	cout<<a.area()<<" "<<b.area()<<endl;
//	return 0;
	area_cl *p;
	p=&a;
	cout<<p->area()<<endl;
	p=&b;
	cout<<p->area()<<endl;
}
