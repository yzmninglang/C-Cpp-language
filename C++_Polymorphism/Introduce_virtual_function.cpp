#include<iostream>
using namespace std;
class My_base{
	public:
		My_base(int x,int y){
			a = x,b= y;
		}
		void show(){
			cout<<"call base My_base function show"<<endl;
			cout<<"a="<<a<<" b="<<b<<endl;
		}
	private:
		int a,b;
};

class My_class:public My_base{
	public:
		My_class(int i ,int k ,int j):My_base(i,k){
			c=j;
		}
		void show(){
			cout<<"Call derieve class My_class function show"<<endl;
		}
	private:
		int c;
};

int main(){
	My_base mb(1,2),*mp;
	My_class mc(2,3,4);
	mp=&mb;
	mp->show();
	mp=&mc;
	mp->show();
	return 0;
}
