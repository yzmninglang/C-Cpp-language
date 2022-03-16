#include <iostream>
using namespace std;
bool decide(int i)
{
	int x=0;
	int m=i;
	while(i%10 !=0)
	{
		x=x*10+i%10;
		i=i/10;
	}
	cout<<x;
	if(x==m)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
//	decide(121);
	if(decide(121))
	{
		cout<<"y"<<endl;
	}
//	cout<<int(decide(121))<<endl;
}

