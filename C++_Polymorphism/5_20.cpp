#include<iostream>
using namespace std;
class Container{
	public:
		Container(double r){
			radius = r;
		}
		virtual void S()=0;
		virtual void V()=0;
	protected:
		double radius;
};

class Sphere:public Container{
	public:
		Sphere(double r):Container(r){
		}
		void S(){
			cout<<"S of Sphere is "<<radius*radius*3.14<<endl;
		}
		void V(){
			cout<<"V of Sphere is "<<radius*radius*radius*4/3<<endl;
		}
};

class Cylinder:public Container{
	public:
		Cylinder(double r,double h):Container(r){
			height=h;
		}
		void S(){
			cout<<"S of Cylinder is "<<radius*radius*3.14*2+radius*2*3.14*height<<endl;
		}
		void V(){
			cout<<"V of Cylinder is "<<radius*radius*3.14*height<<endl;
		}
	protected:
		double height;
};

class Cube:public Container{
	public:
		Cube(double r):Container(r){
		}
		void S(){
			cout<<"S of Cube is "<<radius*radius*6<<endl;
		}
		void V(){
			cout<<"V of Cube is "<<radius*radius*radius<<endl;
		}
};

int main(){
	Sphere a1(5.3);
	Cylinder a2(4.3,3);
	Cube a3(4.3);;
	a1.S();
	a1.V();
	a2.S();
	a2.V();
	a3.S();
	a3.V();
	return 0;
}
