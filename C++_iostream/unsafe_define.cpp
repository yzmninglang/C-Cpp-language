# include <iostream>
using namespace std;
int main()
{
	int a=1;
	#define T1 a+a
	#define T2 T1-T1
	cout<<"T2 is "<<T2<<endl;   //you may expect the T2 is 0
								//but in fact T2  =a+a-a+a=2
	return 0;
}
