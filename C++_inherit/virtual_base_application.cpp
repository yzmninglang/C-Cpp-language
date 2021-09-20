#include<iostream>
#include<string>
using namespace std;
class Data_rec{
	public:
		Data_rec(string name1,int age1,char sex1){
			name = name1;
			age = age1;
			sex = sex1;
		}
	protected:
		string name;
		int age;
		char sex;
};

class Student:virtual public Data_rec{
	public:
		Student(string name1 ,int age1 ,char sex1 ,string major1,double sc):
			Data_rec(name1,age1,sex1){
				major = major1;
				score = sc;
			}
	protected:
		string major;
		double score;
};

class Employee:virtual public Data_rec{
	public:
		Employee(string name1 ,int age1 ,char sex1 ,double salary1,string dep):
			Data_rec(name1,age1,sex1){
				salary = salary1;
				department = dep;
			}
	protected:
		double salary ;
		string department;
};

class E_student:public Employee, public Student{
	public:
		E_student(string name1 ,int age1 ,char sex1 ,double salary1,string dep,
		double sc,string ma):Data_rec(name1,age1,sex1),Employee(name1,age1,sex1,salary1,dep),Student(name1,
		age1,sex1,ma,sc){
		}
		void print(){
			cout<<"name:"<<name<<" age:"<<age<<" sex:"<<sex<<" salary:"<<salary<<endl;
			cout<<"department:"<<department<<" score:"<<score<<" major:"<<major<<endl;
		}
};

int main(){
	E_student stu("yuzhimin",16,'m',1000,"enangaozhong",99,"ee");
	stu.print();
	return 0;
}
