#include<iostream>
using namespace std;
class Container{
	public:
		virtual double volume()=0;
		virtual double area()=0;
};
class Sphere:public Container{
	public:
		Sphere(double r1){
			r=r1;
		}
		virtual double volume(){
			return 3.14*4/3*r*r*r;
		}
		virtual double area(){
			return 4*3.14*r*r;
		}
	private:
		double r;
};

class Cylinder:public Container{
	public:
		Cylinder(double r1,double h1){
			r=r1,h=h1;
		}
		virtual double volume(){
			return 3.14*r*r*h;
		}
		virtual double area(){
			return 2*3.14*r*r+2*3.14*r*h;
		}
	private:
		double r,h;
};
class Cube:public Container{
	public:
		Cube(double r1){
			r=r1;
		}
		virtual double volume(){
			return r*r*r;
		}
		virtual double area(){
			return 6*r*r;
		}
	private:
		double r;
};

int main()
{
	Sphere a(1);
	Cube b(1);
	Cylinder c(1.2,3);
	Container *p;
	p=&a;
	cout<<"area:"<<p->area()<<" volume:"<<p->volume()<<endl;
	p=&b;
	cout<<"area:"<<p->area()<<" volume:"<<p->volume()<<endl;
	p=&c;
	cout<<"area:"<<p->area()<<" volume:"<<p->volume()<<endl;
}
