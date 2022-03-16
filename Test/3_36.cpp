#include<iostream>
using namespace std;
class student{
	public:
		student(int id1 ,double score):id(id1)
		{
			number++;
			total_score=total_score+score;
		}
		static void ave(){
			cout<<total_score/number<<endl;
			cout<<number;
		}
		~student()
		{
			number--;
			total_score=total_score-score;
		}
	private:
		static int number;
		static double total_score;
		//string name;
		double score;
		int id ;
};
int student::number=0;
double student::total_score=0;
int main()
{
	student a(21,32.43),
	b(32,43.54),
	c(43,65.54);
	student *p=new student(12,32.43);
	delete p;
	student::ave();
}
