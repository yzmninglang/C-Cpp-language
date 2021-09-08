#include<iostream>
using namespace std;
class cylinder{
	public:
		cylinder(double r, double h){
			radius = r;
			high = h;
		}
		void vol(){
			volume = radius*radius*3.14*high;
		}
		void disp(){
			cout<<"volume:"<<volume<<endl;
		}
	private:
		double radius,high,volume;
};
int main(){
	cylinder A(22.3,1.2);
	A.vol();
	A.disp();
	return 0;
}
