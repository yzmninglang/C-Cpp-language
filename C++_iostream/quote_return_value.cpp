#include<iostream>
using namespace std;
int a[] = {1,3,5,6,7,3};
int &index(int);
int main(){
	index(1)=100;
	cout<<"a[1]="<<a[1]<<endl;
	return 0;
	
}
int &index(int i){
	return a[i];
}
