#include<iostream>
using namespace std;
class vector{
	public:
		vector(int v1,int v2,int v3,int v4){
			v[1]=v1,v[2]=v2,v[3]=v3,v[4]=v4;
		}
		int &operator[](int i);
	private:
		int v[4];
};
int &vector::operator[](int i){
	return v[i];
}
int main()
{
	vector c(1,2,3,4);
	cout<<c[1]<<endl;
	c[2]=100;
	cout<<c[2]<<endl;
}

