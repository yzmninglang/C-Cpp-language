#include <iostream>
using namespace std;
inline int box(int i,int j,int k);
int main(){
	int a,b,c,v;
	cin>>a>>b>>c;
	v =box(a,b,c);

	cout<<"a*b*c="<<v<<endl;
	return 0; 
}
inline int box(int i, int j ,int k)
{
	return i*j*k;
}
