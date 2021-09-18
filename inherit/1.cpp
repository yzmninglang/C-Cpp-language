#include<stdio.h>
int main()
{
    int a[100];
    a[99]=3;   //ÕıÈ·
    a[100]=5;  //´íÎó
    a[1000]=89;
	printf("%d",a[1000]);
    return 0;
}
