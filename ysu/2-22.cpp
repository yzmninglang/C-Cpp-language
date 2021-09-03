#include<iostream>

using namespace std;

int main()
{
	int *Fib = new int[20];
	for(int i=0;i<20;i++){
		if(i==0 || i==1){
			Fib[i] = 1;
		}
		else{
			Fib[i]=Fib[i-1]+Fib[i-2];
		}
	}
	for(int i=0;i<20;i++){
		cout<<Fib[i]<<' '<<endl;
	}
	return 0;
}
