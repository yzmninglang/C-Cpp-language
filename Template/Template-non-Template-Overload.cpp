#include<iostream>
using namespace std;
template <typename T>
T Max(T x,T y){
	cout<<"call template!"<<endl;
	return (x>y)?x:y;
}

int Max(int x,int y){
	cout<<"call non-template"<<endl;
	return (x>y)?x:y;
}

int main(){
	int i1= 10,i2 = 56;
	double d1 = 30.34,d2 = 3243.3;
	char a1 = 'w',a2 = 'b';
	cout<<"max Integer:"<<Max(i1,i2)<<endl;
	cout<<"max double:"<<Max (d1,d2)<<endl;
	cout<<"max char:"<<Max(a1,a2)<<endl;
	return 0;
}
