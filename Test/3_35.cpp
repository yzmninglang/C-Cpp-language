#include<iostream>
#include<string.h>
using namespace std;
class Stock{
	public:
		Stock(char na[],int q=1000,double p=8.21){
			//stockcode=na;
			strcpy(stockcode,na);
			quan=q;
			price=p;
		}
		void print(){
			cout<<stockcode<<" "<<quan<<" "<<price<<endl;
		}
	
	private:
		char stockcode[90];
		int quan;
		double price;
};
int main()
{
	Stock s1("6000001",3000,5.67);
	Stock s2("6000001");
	s1.print();
	s2.print();
	return 0;
}
