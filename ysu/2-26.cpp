#include<iostream>
#include<math.h>
using namespace std;
double fun(double x);
int main(){
	double a[2]={1,10};
	int Times;
	cout<<"Please input times you want to try:";
	cin>>Times;
	for(int i=0;i<Times;i++){
		double mid;
		mid =( a[0]+a[1])/2;
		if (fun(mid)*fun(a[0])<0){
			a[1]=mid;
		}
		else if(fun(mid)*fun(a[1])<0){
			a[0]=mid;
		}
		else{
			a[1]=mid;
			a[0]=mid;
			break;
		}
	}
	cout<<'\n'<<(a[0]+a[1])/2<<endl;
}
double fun(double x){
	return (x-5)*(x+2);
}
