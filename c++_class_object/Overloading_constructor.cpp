#include<iostream>
using namespace std;
class Date{
	public:
		Date();
		Date(int y ,int m,int d);
		void showDate();
	private:
		int year;
		int month;
		int day;
};

Date::Date(){
	year = 2000;
	month = 4;
	day =28;
}
Date::Date(int y,int m,int d){
	year = y;
	month = m;
	day = d;
}
void Date::showDate(){
	cout<<"year:"<<year<<'\t'<<"month:"<<month<<'\t'<<"day:"<<day<<'\t'<<endl;
}
int main(){
	Date date;
	date.showDate();
	Date date1(2020,9,3);
	date1.showDate();
	return 0;
}
