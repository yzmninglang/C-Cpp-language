#include<stdio.h>
double power(double x,int n){
	double val = 1.0;
	while (n--)val*=x;
	return val;
}
int main(){
	printf("1.01 to power 365 is %f\n",power(1.01,365));
	printf("0.99 to power 365 is %f",power(0.99,365));
	return 0;
}
