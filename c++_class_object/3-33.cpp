#include<iostream>
using namespace std;
class book{
	public:
		void disp(){
			cout<<qu*price<<endl;
		}
		book(int q){
			qu = q;
			price = q*10;
		}
	private:
		int qu ;
		int price;
};


int main(){
	book a[10]={1,2,3,4,5,1,2,3,4,4};
	for(int i =0 ;i<10;i++){
		a[i].disp();
	}
	return 0;
}
