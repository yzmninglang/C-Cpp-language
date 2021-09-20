#include<iostream>
using namespace std;
template <typename T>

class Compare{
	public:
		Compare(T a,T b){
			x=a,y=b;
		}
		T max(){
			return (x>y)?x:y;
		}
	private:
		T x,y;
};

int main(){
	Compare<int>com1(2,3);
	Compare<double>com2(12.32,43.54);
	Compare<char>com3('a','x');
	cout<<"The max of int number is "<<com1.max()<<endl;
	cout<<"The max of double number is "<<com2.max()<<endl;
	cout<<"The max of char number is "<<com3.max()<<endl;
	return 0;
}
