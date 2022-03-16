#include<iostream>
#include<string.h>
using namespace std;
class Stock{
	public:
		void set(char *c,float pr);
		void print();
	private:
		char name[20];
		float price;
};

void Stock::set(char *c,float pr)
{
	strcpy(name,c);
	price=pr;
}
void Stock::print()
{
	cout<<"name:"<<name<<" price:"<<price;
}

int main()
{
	Stock a;
	a.set("yuzhin",100);
	a.print();
	
}
