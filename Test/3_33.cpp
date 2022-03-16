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
	for(int i =0;i<5;i++)
	{
		se[i].dis();
	}
}
