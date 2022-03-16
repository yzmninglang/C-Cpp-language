#include<iostream>
using namespace std;
class vector{
	public:
		vector(int v1,int v2 ,int v3 ,int v4){
			v[0][0]=v1;
			v[0][1]=v2;
			v[1][0]=v3;
			v[1][1]=v4;
		}
		vector(){
		}
		friend vector operator-(vector q,vector x);
		void dis(){
			cout<<v[0][0]<<" "<<v[0][1]<<" "<<v[1][0]<<" "<<v[1][1];
		}
	private:
		int v[2][2];
};
vector operator-(vector q,vector x){
	//cout<<v[1][0]-x.v[1][0]<<endl;
	return vector(q.v[0][0]-x.v[0][0],q.v[0][1]-x.v[0][1],q.v[1][0]-x.v[1][0],q.v[1][1]-x.v[1][1]);
	
}
int main()
{
	int v1,v2,v3,v4;
	vector p1(1,2,3,4),p4;
	cout<<"please input four number:";
	cin>>v1>>v2>>v3>>v4;
	vector p2(v1,v2,v3,v4);
	p4=p1-p2;
	p4.dis();
	
}
