#include<iostream>
#include<string>
using namespace std;
class Girl{
	public:
		Girl(string n , int d){
			name = n;
			age = d;
		}
//		string name;
		friend void disp(Girl &);
	private:
		string name;
		int age;
};
void disp(Girl &x){
	cout<<"name:"<<x.name<<" "<<"age:"<<x.age;
}
int main(){
	Girl x("xiaoming",18);
	disp(x);
	return 0;
}
