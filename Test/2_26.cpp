#include<iostream>
using namespace std;
int a1,a2,a3;
double f(double x)
{
	return a1+a2*x+a3*x*x;
}
int main()
{
	double f1,f2,x1,x2;
	cin>>a1>>a2>>a3;
	x1=rand();
	x2=rand();
	for(int i=0;i<1000;i++)
	{
		if(f(x1)*f(x2)<0)
		{
			if(f((x1+x2)/2)*f(x1)<0)
			{
				x2=(x1+x2)/2;
			}else
			{
				x1=(x1+x2)/2;
			}
		}
		else{
			x1=rand();
			x2=rand();
		}
	}
	cout<<(x1+x2)/2;
}
