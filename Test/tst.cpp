#include<iostream>
using namespace std;
class ba{
	public:
		ba()
		{ cout<<"con_ba"<<endl;
		}
		~ba()
		{
			cout<<"decon_ba"<<endl;
		}
};
class de:public ba{
	public:
		de()
		{
			cout<<"con_de"<<endl;
		}
		~de()
		{
			cout<<"deco_de"<<endl;
		}
//		de(const de & a)
//		{
//			cout<<"copy class"<<endl;
//		}
};

ba& fu(ba a)
{
//	de as;
	return a;
}
int main()
{
	ba d,a;
	a=fu(d);  
}
