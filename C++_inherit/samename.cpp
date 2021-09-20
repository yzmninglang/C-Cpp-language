#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		Student(int number1,string name1 ,float score1){
			number = number1;
			name = name1;
			score = score1;
		}
		void print(){
			cout<<"number:"<<number<<" "<<"name:"<<name<<" "<<"score:"<<score;
		}
	protected:
		int number;
		string name;
		float score;
};
class Ustudent:public Student{
	public:
		Ustudent(int number1,string name1,float score1,string major1)
		:Student(number1,name1,score1){
			major = major1;
		}
		void print(){
			cout<<"major:"<<major<<endl;
		}
	private:
		string major;
};

int main(){
	Ustudent stu(1,"xiaoyu",100,"ee");
	stu.Student::print();
	return 0;
}
