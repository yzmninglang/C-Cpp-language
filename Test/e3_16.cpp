#include<iostream>
using namespace std;
class a{
	public:
		a(int i){
			I=i;
		}
//		a(){
//		}
		int I;
};
int main()
{
	a p[4];
	p[0]=a(1);
	p[1]=a(2);
	for(int i=0;i<4;i++)
	{
		cout<<p[i].I<<endl;
	}
	
}
