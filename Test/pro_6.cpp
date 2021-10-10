#include<iostream>
using namespace std;
class example{
private:
	int i;
public:
	example(int n){
		i = n;
		cout<<"Constructing\n";}
	~example(){
			cout<<"Destructing\n";
	}
	int get_i(){
		return i;
	
	}


};


int sqr_it(example o){
	return o.get_i()*o.get_i();

}

int main(){
	example x(10);
	cout<<x.get_i()<<endl;
	cout<<sqr_it(x)<<endl;
	return 0;
}
