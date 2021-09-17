#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		Student(int n,string na,float sc){
			number = n;
			name = na;
			score = sc;
		}
		void print(){
			cout<<"number:"<<number<<" "<<"name:"<<name<<" "<<"score:"<<score<<endl;
		}
	protected:
		int number;
		string name;
		float score;
};

class Ustudent:public Student{
	public:
//		Ustudent(int number1,string name1,float score1 ,string major1);
//		Ustudent(int number1,string name1,float score1 ,string major1)
//		:Student(number1,name1,score1){
//			major = major1;
//		}
		void print1(){
			print();
			cout<<"MAJOR:"<<major<<endl;
		}
	protected :
		string major;
};
//Ustudent::Ustudent(int number1,string name1,float score1 ,string major1)
//	:Student(number1,name1,score1){
//		major = major1;
//	}
int main(){
	Ustudent stu(1,"yuzhi",56,"ee");
	stu.print1();
	return 0;
}
