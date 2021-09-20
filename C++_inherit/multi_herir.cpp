#include<iostream>
using namespace std;
class Y{
	public:
		Y(int sb){
			b = sb;
		}
		int getY(){
			return b;
		}
		~Y(){
			cout<<"Y_Destructor called"<<endl;
		}
	private:
		int b;
		
};
tt
class X{
	public:
		X(int sa){
			a = sa;
		}
		int getx(){
			return a;
		}
		~X()
		{
			cout<<"X_Destructor called"<<endl;
		}
	private:
		int a;
};


class Z:private Y,public X{
	public:
		Z(int sa,int sb,int sc):Y(sa),X(sb){
			c=sc;
		}
		int getz(){
			return c;
		}
		int gety(){
			return Y::getY();
		}
		~Z(){
			cout<<"Z_Destructor called"<<endl;
		}
	private:
		int c;
};
int main(){
	Z obj(1,3,4);
	int ma = obj.getx();
	cout<<"ma="<<ma<<endl;
	int mb = obj.gety();
	cout<<"mb="<<mb<<endl;
	int mc = obj.getz();
	cout<<"mc="<<mc<<endl;
	return 0;
}
