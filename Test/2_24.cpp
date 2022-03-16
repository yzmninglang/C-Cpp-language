#include <iostream>
using namespace std;
int main()
{
	int i,j,sum=0;
	for(int i =0;i<101;i++)
	{
		for(int j=0;j<51;j++)
		{
			for(int k=0;k<21;k++)
			{
				if(i+2*j+5*k==100)
				{
					cout<<i<<" "<<j<<" "<<k<<endl;
					sum++;
				}
			}
		}
	}
	cout<<sum;
}
