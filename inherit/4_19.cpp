#include<iostream>
//#include<iomanip>
using namespace std;
class table{
	public:
		table(int a ,int z){
			A = a,Z =z;
		}
		void ascii(void);
	protected:
		int A,Z;
};

void table::ascii(void){
	for(int k=A;k<=Z;k++){
		cout<<(char) k<<":"<<k;
		if ((k-A)%12==0){
			cout<<'\n';
		}
	}
}
class Der_table:public table{
	public:
		Der_table(char a ,char z,char *m):
			table((int)a,(int)z){
				p = m;
			}
		void print(){
			cout<<p<<'\n';
			ascii();
		}
	protected:
		char *p;
};

int main(){
	Der_table ta('a','z',"Ascii to number");
	ta.print();
	return 0;
}
