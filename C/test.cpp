#include<iostream>
using namespace std;
class example{
	public:
		example(int n){
			i = n;
			cout<<"Construction\n";
		}
		~example(){
			cout<<"Destruction\n";
		}
		int get_i(){
			return i;
		}
	private:
		int i;		
};

int sqr_it(example o){
	return o.get_i()*o.get_i();
}

int main(){
	example x(10);
	cout<<x.get_i()<<endl;
	cout<<sqr_it(x)<<endl;
}
