#include<iostream>
#include<string>
using namespace std;
class Time{
	public:
		Time(int h,int m,int s){
			hours = h;
			minutes = m;
			seconds = s;
		}
		void display(){
			cout<<"Birthday:"<<hours<<"hours"<<minutes<<"minutes"<<seconds<<"seconds"<<endl;
		}
	protected:
		int hours,minutes,seconds;
};

class Date{
	public:
		Date(int m,int d,int y){
			month = m;
			day = d;
			year = y;
		}
		void display(){
			cout<<"Y-M-D"<<year<<" "<<month<<" "<<day<<endl;
		}
	protected:
		int month ,day ,year;
};

class Birthtime:public Time,public Date{
	public:
		Birthtime(int h ,int mi,int s,int mo ,int d ,int y,string n):
			Time(h,mi,s),Date(mo,d,y){
				name = n;
			}
		void show(){
			cout<<name<<endl;
			Time::display();
			Date::display();
		}
	protected:
		string name;
};

int main(){
	Birthtime YU(7,6,5,5,6,2021,"yuzhimin");
	YU.show();
	return 0;
}
