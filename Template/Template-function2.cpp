#include<iostream>
using namespace std;
template <typename T>
T sum(T *array,int n){
	T total =0;
	for(int i=0;i<n;i++){
		total += array[i];
	}
	return total;
}

int main(){
	int int_array[]={1,2,3,5,6,7,8,9,10};
	double array[]={1,2,3,4,5,6,6.4};
	double itotal = sum(array,7);
	cout<<itotal<<endl;
	return 0;
}

