#include<iostream>
#include<string.h>
using namespace std;
class Stock{
	public:
		Stock(char na[],double q=1000,double p=8.98){
			strcpy(stockcode,na);
			quan = q;
			price = p;
		}
		void disp(){
			cout<<"na:"<<stockcode<<" "<<"quan:"<<quan<<" "<<"price:"<<price<<endl;
	
		}
	private:
		char stockcode[20];
		double quan,price;
};

int main(){
	Stock a("nihao",32.4,35.3);
	a.disp();
	return 0;
	
}



