#include<iostream>
using namespace std;
int main(){
	int *s;
	s = new int[5];
	for(int i = 0;i<5;i++){
		s[i]=100 +2*i;
	}	
	for(int j = 0;j<5;j++){
		cout<<s[j]<<" ";
	}
	delete []s;
	return 0;
}
