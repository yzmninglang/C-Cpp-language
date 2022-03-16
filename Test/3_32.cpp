#include<iostream>
using namespace std;
class cylinder{
	public:
		cylinder(double x1,double x2){
			r=x1,h=x2;
		}
		void vol(){
			cout<<"volumn:"<<2*r*3.14*h<<endl;
		}
	private:
		double r,h;
};
int main()
{
	cylinder p(2,3.43);
	p.vol();
}
