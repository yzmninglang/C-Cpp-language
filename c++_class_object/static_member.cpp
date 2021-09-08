#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		Student(string name1,string stu_no1,float scorel);
		~Student();
		void show();
		void show_count_sum_ave();
	private:
		string name;
		string stu_no;
		float score;
		static int count;
		static float sum;
		static float ave;
//		float score;
};
Student::Student(string name1,string stu_no1,float scorel){
	stu_no = stu_no1;
	name = name1;
	score = scorel;
	++count;
	sum = sum+score;
	ave = sum/count;
}
void Student::show(){
	cout<<"\n name:"<<name;
	cout<<"\n number"<<stu_no;
	cout<<"\n score"<<score;
}
Student::~Student(){
	--count;
	sum=sum-score;
}
void Student::show_count_sum_ave(){
	cout<<"\n number"<<count;
	cout<<"\n averge"<<ave;
}
int Student::count =0;
float Student::sum =0;
float Student::ave =0;
int main(){
	Student stu1("A","1",90);
	stu1.show();
	stu1.show_count_sum_ave();
	cout<<"\n-----------\n";
	Student stu2("B","2",80);
	stu2.show();
	stu2.show_count_sum_ave();
	return 0;
}

