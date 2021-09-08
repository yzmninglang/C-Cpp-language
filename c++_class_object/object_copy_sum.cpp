#include<iostream>
using namespace std;
class Point{
	public:
		Point(int a,int b=0){
		 x = a,y = b;
		}
		Point(const Point &p){
			x = 2*p.x;
			y = 2*p.y;
		}
		int get_x(){
			return x;
		}
		int get_y(){
			return y;
		}
		void print(){
			cout<<"x,y="<<x<<","<<y<<endl;
		}
	private:
		int x;
		int y;
};
Point fun(){
	Point p3(10,30);
	return p3;
}
int main(){
	Point p1(30,40);
	p1.print();
	Point p2(p1);
	
	p2.print();
	Point p3=p1;
	p3.print();
	
	p2 = fun();
	p2.print();
	return 0;
}

