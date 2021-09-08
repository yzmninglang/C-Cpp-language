#include<iostream>
using namespace std;
class Point{
	public:
		Point(int a,int b){
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
	private:
		int x;
		int y;
};

int main(){
	Point A(1,3);
	Point B(A);
	cout<<"A="<<A.get_x()<<" "<<A.get_y();
	cout<<"B="<<B.get_x()<<" "<<B.get_y();
	return 0;
	
}
