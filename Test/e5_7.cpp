#include<iostream>
using namespace std;
class xq{
	public:
		xq(int x1=0,int y1=0){
			x=x1,y=y1;
		}
		friend xq operator+(int ,xq ob);
		friend xq operator+(xq ob,int);
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
	private:
		int x,y;
};
xq operator+(int m ,xq ob){
	return xq(m+ob.x,ob.y);
}
xq operator+(xq ob,int m ){
	return xq(m+ob.x,ob.y);
}

int main()
{
	xq x1(1,2),x2(2,3),x3,x4;
	x3=x1+1;
	x4=1+x2;
	x3.print();
	x4.print();
}
