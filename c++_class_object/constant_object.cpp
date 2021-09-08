#include<iostream>
using namespace std;
class Sample{
	public:
		int m;
		Sample(int i,int j){
			n= i;
			m =j;
		}
		void setvalue(int i){
			m=i;
		}
		void disp(){
			cout<<"m="<<m<<" "<<"n ="<<n<<endl;
		}
	private:
		int n;
};
int main(){
	Sample const a(10,20);
//	a.m =78;
//	a.setvalue(3);
	a.disp();
	return 0;
}
