#include<iostream>
using namespace std;
#include<iomanip>
class table{
	public:
		table(char a ,char b){
			i=a;last =b;
		}
		void ascii(void);
		void print(void);
	protected:
		int i,last;
};
void table::print(void)
{
	ascii();
}
void table::ascii(void)
{
	int k=1;
	for(;i<last+1;i++)
	{
		cout<<setw(4)<<i<<" "<<(char)i;
		if(k%12==0)
		{
			cout<<"\n";
		}
		k++;
	}
	cout<<'\n';
}
class der_table:public table{
	public:
		der_table(char a,char b,char *m):table(a,b)
		{
			c=m;
		}
		void print(void);
	protected:
		char *c;
};
void der_table::print(void){
	cout<<c<<endl;
	table::print();
}
int main()
{
	der_table ob('a','z',"ASCII Value--char");
	ob.print();
}
