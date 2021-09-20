#include<iostream>
#include<string>
using namespace std;
class Data_rec{
	public:
		Data_rec(string n,int a,char s){
			name = n;
			age = a;
			sex = s;
		}
		void print(){
			cout<<"name:"<<name<<" "<<"age:"<<age<<" "<<"sex:"<<sex;
		}
	protected:
		string name;
		int age;
		char sex;
};

class Employee:virtual public Data_rec{
	public:
		Employee(string n,int a,char s,string d,double sa):
			Data_rec(n,a,s){
				department = d;
				salary = sa;
			}
		void show_info(){
			cout<<" salary:"<<salary<<" department:"<<department;
		}
	protected:
		double salary;
		string department;
};

class Student:virtual public Data_rec{
	public:
		Student(string n,int a,char s,string m,double sc):
			Data_rec(n,a,s){
				major = m;
				score = sc;
			}
		void show_info(){
			cout<<" major:"<<major<<" score:"<<score;
		}
	protected:
		string major;
		double score;
};

class Teacher:public Employee{
	public:
		Teacher(string n,int a,char s,string d,double sa,string te):
			Employee(n,a,s,d,sa),Data_rec(n,a,s){
				teach = te;
			}
		void show_info(){
			Data_rec::print();
			Employee::show_info();
			cout<<" teach:"<<teach;
		}
	protected:
		string teach;
};

class E_Student:public Employee,public Student{
	public:
		E_Student(string n,int a,char s,string d,double sa,
		string m,double sc):Employee(n,a,s,d,sa),Data_rec(n,a,s),
		Student(n,a,s,m,sc){
		}
		void print(){
			Data_rec::print();
			Student::show_info();
			Employee::show_info();
		}
};

int main(){
	Student yu("yuzhimin",18,'m',"ee",100);
	E_Student zhang("zhangziyan",17,'f',"debate",3000,"tongji",120);
	Teacher li("libing",37,'f',"math",10000,"Probability theory");
	yu.Data_rec::print();
	yu.show_info();
	cout<<endl;
	zhang.print();
	cout<<endl;
	li.show_info();
	return 0;
}
