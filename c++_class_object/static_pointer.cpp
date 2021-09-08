#include<iostream>
using namespace std;
class aclass{
	public:
		aclass(){
			total++;
		}
		~aclass(){
			total--;
		}
		int get(){
			return total;
		}
	private:
		static int total;
};
int aclass::total = 0;
int main()
{
	aclass a,b,c;
	aclass *p;
	cout<<"*p:"<<a.get()<<endl;
	p = new aclass;
	cout<<"p:"<<a.get()<<endl;
	delete p;
	cout<<"delete:"<<a.get()<<endl;
	return 0;
}
