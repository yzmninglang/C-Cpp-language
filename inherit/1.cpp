#include<stdio.h>
int main()
{
    int a[100];
    a[99]=3;   //��ȷ
    a[100]=5;  //����
    a[1000]=89;
	printf("%d",a[1000]);
    return 0;
}
