#include<stdio.h>
#include<iostream>
using namespace std;
int add(int x,int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int (*fun)(int x,int y);
int main(){
	//first kind 
	fun = add;
	cout<<"(*fun)(1,2)="<<(*fun)(1,2)<<endl;
	fun = &sub;
	cout<<"(*fun)(5,3)="<<(*fun)(5,3)<<" "<<fun(5,3);
	
	
	return 0;
	
}
