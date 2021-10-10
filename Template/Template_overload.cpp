#include<iostream>
using namespace std;
template<typename T>
T Max(T x,T y){
	return (x>y)?x:y;
}
template<typename T>
T Max(T x,T y,T  z){
	if(x<y){
		if (y<z)return z;
		return y;
	}
	if(x<z){
		return z;
	}
	return x;
}

int main(){
	int a,b=12,c=32,d=69;
	a = Max(b,c);
	cout<<"a:"<<a<<endl;
	a = Max(c,d,b);
	cout<<"a:"<<a<<endl;
}

