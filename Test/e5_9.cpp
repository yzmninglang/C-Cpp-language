#include<iostream>
using namespace std;
class x{
	public:
		x(int r,int i)
		{
			real = r;
			imag = i;
		}
		friend x operator++(x &ob);
		friend x operator++(x &ob,int);
		void print();
	private:
		int real,imag;
};
x operator++(x &ob)
{
	ob.real++;
	ob.imag++;
}
x operator++(x &ob,int){
	ob.real++;
	ob.imag++;
}
void x::print(){
	cout<<real<<" "<<imag<<endl;
}

int main()
{
	x x1(1,2),x2(2,3);
	x1++;
	++x2;
	
	
}
