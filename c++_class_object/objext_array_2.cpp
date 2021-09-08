#include<iostream>
#include<cmath>
using namespace std;
class exam{
	public:
		exam(int n){
			x = n;
		}
		exam(){
			x=123;
		}
		int get_x(){
			return x;
		}
	private:
		int x;
};
int main(){
	exam ob1[4]={11,22,33,44};
	exam ob2[4]={11,22};
	for (int i=0;i<4;i++){
		cout<<ob1[i].get_x()<<' ';
	}
	for (int i=0;i<4;i++){
		cout<<ob2[i].get_x()<<' ';
	}
	return 0;
}
