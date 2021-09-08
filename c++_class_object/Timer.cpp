#include<iostream>
#include <stdlib.h>
using namespace std;
class timer{
	public:
		timer(){
			second =0;
		}
		timer(char *t){
			second = atoi(t);
		}
		timer(int t){
			second = t;
		}
		timer(int min,int sec){
			second=min*60+sec;
		}
		int gettimes(){
			return second;
		}
	private:
		int second;
};

int main(){
	timer a;
	timer b(10);
	timer c("20");
	timer d(1,10);
	cout<<"second1="<<a.gettimes()<<endl;
	cout<<"second2="<<b.gettimes()<<endl;
	cout<<"second3="<<c.gettimes()<<endl;
	cout<<"second4="<<d.gettimes()<<endl;
	return 0;
}
