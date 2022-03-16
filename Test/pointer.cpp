#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int *p = new int[10];
	delete []p;
	int a[]={1,2,3};
	p=a;
	cout<<p[1];
}
