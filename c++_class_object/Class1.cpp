#include<iostream>
using namespace std;
class Point{
	public:
		void setpoint(int a,int b){
			x=a;
			y=b;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
	private:
		int x,y;
};

int main(){
	Point op1,op2;
	int i,j;
	op1.setpoint(1,2);
	op2.setpoint(2,4);
	i = op1.getx();
	j = op1.gety();
	cout<<"op1 i ="<<i<<"op1 j="<<j<<endl;
	return 0;
}
