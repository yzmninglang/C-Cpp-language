#include<iostream>
#include<string>
using namespace std;
class Student;
class Score{
	public:
		Score(float c=0,float e=0,float m=0){
			computer = c;
			english = e;
			math = m ;
		}
		void show(){
			cout<<"\ncomputer :"<<computer<<"\nenglish :"<<english<<"\nmath :"<<math;
		}
	private:
		float computer ;
		float english;
		float math;
};

class Student
{
	public:
		Student(string n,float c=0,float e=0,float m=0):s(c,e,m)
		{
			name = n;
		}
		void disp(){
			cout<<"name :"<<name;
			s.show();
		}
	private:
		Score s;
		string name;
};
int main(){
	Student xiao("xiaoming",67.2,32.4,43.5);
	xiao.disp();
	return 0;
}
