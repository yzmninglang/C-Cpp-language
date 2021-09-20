#include<iostream>
using namespace std;
class Three{
	public:
		Three(int I1=0,int I2 = 0,int I3 =0);
		void print();
		Three operator--();
		Three operator--(int);
	private:
		int i1,i2,i3;
};
Three::Three(int I1,int I2,int I3){
	i1 = I1,i2 = I2,i3 = I3;
}
Three Three::operator--(){
	--i1,--i2,--i3;
}
Three Three::operator--(int){
	i1--,i2--,i3--;
} 
void Three::print(){
	cout<<i1<<','<<i2<<','<<i3<<endl;
}
int main(){
	Three X(4,2,3),B,C,D(1,2,3);
	X.print();
	B=X;
//	C=--X;
	--B;
	B.print();
	
//	C.print();
	return 0;
}
