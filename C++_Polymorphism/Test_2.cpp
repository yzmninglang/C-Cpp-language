#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int **p;
	int *q;
	int a[3]={1,2,3};
	q = a;
	p =&q;
	printf("%d",*(*p+1));
	return 0;
}
