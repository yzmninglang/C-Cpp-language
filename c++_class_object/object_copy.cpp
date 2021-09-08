#include<iostream>
using namespace std;
class myclass{
	public:
		void set(int i,int j)
		{
			a = i;
			b = j;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
	private:
		int a,b;
};
int main(){
	myclass o1,o2;
	o1.set(20,5);
	o2 = o1;
	o1.show();
	o2.show();
	return 0;
}
