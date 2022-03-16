#include<iostream>
using namespace std;

class a{
	public:
		virtual void  print(){
			cout<<"base"<<endl;
		}
		void we()
		{
			cout<<"nihao";
		}
};
class b:public a{
	public:
		virtual void print(){
			cout<<"son"<<endl;
		}
		void we()
		{
			cout<<"nihaoma";
		}
};
int main()
{
	b b1;
	a &qq=b1;
	qq.print();
	b1.we();
}
