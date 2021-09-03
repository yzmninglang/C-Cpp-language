#include<iostream>
using namespace std;
int main(){
	int i ;
	i =30;
	int &j =i;
	cout<<"i="<<i<<"j="<<j<<endl;
	j=90;
	cout<<"i="<<i<<"j="<<j<<endl;
	cout<<"i's address is "<<&i<<" "<<"j's address is "<<&j;
	return 0;
	
}
