#include<iostream>
#include<math.h>
using namespace std;
double sroot(int i)
{
	return sqrt(i*1.0);
}

int main()
{
	int i =12;
	long l =12345678;
	double d=56.78;
	cout<<"The sqrt of"<<i<<" is "<<sroot(i)<<endl;
	cout<<"The sqrt of"<<l<<" is "<<sroot(i)<<endl;
	cout<<"The sqrt of"<<d<<" is "<<sroot(i)<<endl;
	return 0;
}
