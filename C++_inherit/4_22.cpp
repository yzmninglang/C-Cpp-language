#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		Person(int i,string n){
			id = i;
			name = n;
		}
		void display(){
			cout<<"id:"<<id<<" "<<"name:"<<name<<" ";
		}
	protected:
		int id;
		string name;
};

class Student:public Person{
	public:
		Student(int i ,string n,int g,int sc):
			Person(i,n){
				grade = g;
				score = sc;
			}
		void show(){
			display();
			cout<<"grade:"<<grade<<" "<<"score:"<<score<<endl;
		} 
	protected:
		int grade,score;
};

class Teacher:public Person{
	public:
		Teacher(int i ,string n,string p,string dep):
			Person(i,n){
				profile = p,department = dep;
			}
		void show(){
			display();
			cout<<"profile:"<<profile<<" "<<"department:"<<department<<endl;
		}
	protected:
		string profile,department;
};

int main(){
	Student S1(1,"yuzhimin",2,100);
	Teacher S2(23,"libing","professor","math");
	S1.show();
	S2.show();
	return 0;
}
