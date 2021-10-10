#include<stdio.h>
double power(double x,int n){
	double val =1.0;
	while (n--)
		val*=x;
	return val;
}

int main(){
	int value=0;
	int i =0;
	printf("Please input 8 bits number:");
	for (i =7;i>=0;i--){
		char ch;
		ch = getchar();
//		printf("%d",ch);
		if (ch == '1')
			value += (int) power(2,i);
	}
	printf("Decimal value is %d",value);
	return 0;
}

