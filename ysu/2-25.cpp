#include<iostream>
#include<math.h>
using namespace std;
void decide(int &x,int &y);
int main(){
	int x,y;
	cout<<"Please input x and y:";
	cin>>x>>y;
	decide(x,y);
	cout<<"sorted x and y:"<<x<<'\t'<<y;
	return 0;
}

void decide(int &x,int &y){
	int temp;
	if(x>y){
	
	}else{
		temp=x;
		x=y;
		y=temp;
	}
}
