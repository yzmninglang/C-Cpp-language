#include<iostream>
using namespace std;
class Location{
	public:
		Location(int m,int n){
			X=m,Y=n;
		}
		Location(){
		}
		void Init(int intx,int inty){
			X=intx,Y=inty;
		}
		int getx(){
			return X;
		}
		int gety(){
			return Y;
		}
	private:
		int X,Y;
};
int main(){
	Location A3;
	A3.Init(1,2);
	cout<<"A3.Getx()"<<" "<<A3.getx()<<" "<<"A3.gety()"<<" "<<A3.gety()<<endl;
	return 0;
}
