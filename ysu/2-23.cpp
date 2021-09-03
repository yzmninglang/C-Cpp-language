#include<iostream>
#include<math.h>
using namespace std;
int sroot(int x);
double sroot(double x);
long sroot(long x);

int main()
{
	int x;
	long y;
	double z;
	cout<<"Please input variable x,y,z:"<<endl;
	cin>>x;
	cout<<"sqrt of x is "<<sroot(x)<<"sqrt of y is "<<sroot(y)<<"sqrt of z is "<<sroot(z)<<endl;
	return 0;	
}

int sroot(int x){
	return sqrt(x);
}
double sroot(double x){
	return sqrt(x);
}
long sroot(long x){
	return sqrt(x);
}
