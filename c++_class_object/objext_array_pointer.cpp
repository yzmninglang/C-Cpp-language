#include<iostream>
using namespace std;
class exe{
	public:
		void set_a(int a)
		{
			x = a;
		}
		void show_a(){
			cout<<x<<endl;
		}
	private:
		int x;
};
int main(){
	exe ob[3];
	exe *p;
	ob[0].set_a(1),ob[1].set_a(3),ob[2].set_a(4);
	p = ob;
	p->show_a();
	p++;
	p->show_a();
	return 0;
}
