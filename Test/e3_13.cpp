#include<iostream>
using namespace std;
class a{
	public:
		a(){
			out++;
			b=0;
		}
		static int out;
		static void dis();
		static void si(a &x);
		int b;
};
void a::dis(){
	cout<<out<<endl;
}
int a::out=0;
void a::si(a &x)
{
	cout<<x.b<<endl;
}
int main()
{
	a p1,p2,p3;
	//cout<<a::cout<<endl;
	p1.b=89;
	a::si(p1);
//	a::dis();
}
