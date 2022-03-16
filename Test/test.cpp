#include<iostream>
using namespace std;
#define T 3+4
int main()
{
	int *p =new int[20];
	for(int i=0;i<20;i++)
	{
		if(i==0 || i==1)
		{
			p[i]=i;
		}
		else
		{
			p[i]=p[i-1]+p[i-2];
		}
		cout<<p[i]<<" ";
	}
}
