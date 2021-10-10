#include<iostream>
using namespace std;
class book{
		float qu,price;
	public:
		book(float q,float p)
		{
			qu =q ;price=p;
		}
		void disp(){
			cout<<qu*price<<endl;
		}
};

int main(){
	int i;
	
	//complete
	book obj[5]={
	book(1,1*10),
	book(2,2*10),
	book(3,3*10),
	book(4,4*10),
	book(5,5*10)
	};
	book *op=&obj[4];
	for(i=5;i>0;i--,op--){
		op->disp();
	}
}
