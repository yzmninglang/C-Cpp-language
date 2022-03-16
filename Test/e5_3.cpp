#include<iostream>
using namespace std;
class coord{
	public:
		coord(int x1=0,int y1=0){
			x=x1,y=y1;
		}
		friend coord operator-(coord &ob);
		int x,y;

		
};
coord operator-(coord &ob){
	ob.x=-ob.x;
	ob.y=-ob.y;
	return ob;
}
int main()
{
	coord ob1(50,60),ob2;
	cout<<ob1.x<<" "<<ob1.y;
	ob2=-ob1;
	cout<<ob1.x<<" "<<ob1.y;
	return 0;
}

