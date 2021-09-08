#include<iostream>
#include<string>
using namespace std;
class Tr{
	public:
		Tr(int n){
			i=n;
		}
		void set_i(int n){
			i=n;
		}
		int get_i(){
			return i;
		}
	private:
		int i;
};
void sqrit_it(Tr ob){
	ob.set_i(ob.get_i()*ob.get_i());
	cout<<"in function sqrt_it ,member i="<<ob.get_i()<<endl;
}
int main(){
	Tr ob(4);
	sqrit_it(ob);
	cout<<"In main function,after execing ,i="<<ob.get_i()<<endl;
	return 0;
}
