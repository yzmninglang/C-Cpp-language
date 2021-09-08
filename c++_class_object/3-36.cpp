#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		Student(string n,int i ,float s){
			name =n;
			id = i;
			score = s;
			number ++;
			total = total +score;
			
		}
		static int mean(){
			return total/number;
		}
	private:
		string name;
		int id;
		float score;
		static int total;
		static int number;
};
int Student::total=0;
int Student::number=0;
int main(){
	Student a[5]={{"nihao",1,67},{"niho",2,87.7},{"niha43o",3,97},{"nihewao",4,87},{"nihafdo",5,99}};
	int mean = Student::mean();
	cout<<"mean:"<<mean<<endl;
}

