#include<iostream>
using namespace std;
class Date{
	public:
		Date(int y,int m,int d):year(y),month(m),day(d){
		}
		void showdata(){
			cout<<"Y-M-D:"<<year<<","<<month<<","<<day<<endl;
		}
	private:
		const int year,month,day;
};
int main(){
	Date a(2019,1,1);
	a.showdata();
	return 0;
}
