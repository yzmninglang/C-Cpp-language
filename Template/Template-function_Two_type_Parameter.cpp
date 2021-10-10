#include<iostream>
using namespace std;
template<typename T1,typename T2>
T2 Max(T1 x,T2 y){
	return (x>y)?x:y;
}
int main(){
	int i1=10, i2 =302;
	double x1 =12.3,x2=63.3;
//	cout<<Max(i1,i2)<<endl;
//	cout<<Max(x2,x1)<<endl;
	cout<<Max(i1,x1)<<endl;
	cout<<Max(i1,x2)<<endl;
}
