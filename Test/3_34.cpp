#include<iostream>
using namespace std;
class book{
	public:
		book(int x){
			qu=x;
			price=10*qu;
		}
		void dis();
	private:
		int qu,price;
	
};
void book::dis(){
	cout<<qu*price<<endl;
}
int main()
{
	book se[5]={1,2,3,4,5};
	book *p=&se[4];
	for(int i =5;i>0;p--,i--)
	{
		p->dis();
	}
}
