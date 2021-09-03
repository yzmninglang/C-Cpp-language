#include<iostream>
#include<math.h>
using namespace std;
struct{
	int one;
	int two;
	int five;
}a[1000];
int main()
{
	int m=0;
	for(int i =0;i<=20;i++){
		for(int j=0;j<=(100-i*5)/2;j++)
		{
			int k=100-i*5-j*2;
			a[m].five=i;
			a[m].two =j;
			a[m].one =k;
			m++;
		}
	}
	cout<<m<<endl;
	for(int i=0;i<m;i++){
		cout<<i<<'\t'<<a[i].one<<'\t'<<a[i].two<<'\t'<<a[i].five<<endl;
	}
	return 0;
}
