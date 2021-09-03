#include<iostream>
using namespace std;
int main()
{
	int i=15;
	int *iptr=&i;
	int &rptr = i;
	cout<<"I is "<<i<<endl;
	cout<<"*iptr is  "<<*iptr<<endl;
	cout<<"rptr is "<<rptr<<endl;
	i=29;
	cout<<"After changing i to 29:"<<endl;
	cout<<"i is "<<i<<endl;
	cout<<"*iptr is  "<<*iptr<<endl;
	cout<<"rptr is "<<rptr<<endl;
	return 0;
}
