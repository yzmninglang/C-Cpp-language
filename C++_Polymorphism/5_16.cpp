#include<iostream>
using namespace std;
class Length{
	int meter;
	public:
		Length(int m){
			meter = m;
		}
		operator double(){
			return (1*meter/1000);
		}
};
int main(){
	Length a(1500);
	double m =float(a);
	cout<<"m="<<m<<"km"<<endl;
	return 0;
}
