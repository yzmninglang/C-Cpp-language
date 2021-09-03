#include<iostream>
using namespace std;
int main(){
	int *ptr;
	ptr = new int;
	*ptr = 10;
	cout<<*ptr;
	delete ptr;
	return 0;
}
