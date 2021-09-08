#include<iostream>
using namespace std;
class small_cat{
	public:
		small_cat(double w);
		void display();
		static void total_disp();
	private:
		double weight;
		static double total_weight;
		static double total_number;
};
small_cat::small_cat(double w){
	weight = w;
	total_weight+=w;
	total_number++;
}
void small_cat::display()
{
	cout<<"The weight of cat is "<<weight<<'\n';
}
void small_cat::total_disp(){
	cout<<total_number<<" cats' weights"<<total_weight<<endl;
}
double small_cat::total_weight = 0;
double small_cat::total_number = 0;
int main(){
	small_cat w1(0.5) ,w2(0.8),w3(0.2);
	w1.display();
	w2.display();
	w3.display();
	small_cat::total_disp();
	return 0;
}
