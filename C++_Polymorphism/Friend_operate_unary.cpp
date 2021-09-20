#include<iostream>
using namespace std;
class Three{
	public:
		Three(int I1=0,int I2=0,int I3=0);
		void print();
		friend Three operator++(Three &);
		friend Three operator++(Three &,int);
	private:
		int i1,i2,i3;
};

Three::Three(int I1,int I2,int I3){
	i1=I1,i2= I2,i3=I3;
}
void Three::print(){
	cout<<"i1:"<<i1<<" i2:"<<i2<<" i3:"<<i3<<endl;
}
Three operator++(Three &i){
	++i.i1;
	++i.i2;
	++i.i3;
} 

Three operator++(Three &i,int){
	i.i1++;
	i.i2++;
	i.i3++;
}
int main(){
	Three obj1,obj(32,43,54);
	obj.print();
	obj++;
	obj.print();
	++obj;
	obj.print();
	return 0;
	
}
