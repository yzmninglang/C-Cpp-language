#include<iostream>
using namespace std;
class List{
	public:
		List(int i,int j,int k ,int m){
			a[0][0]=i,a[0][1]=j,a[1][0]=k,a[1][1]=m;
		}
		List(int (*p)[2]){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					a[i][j]=p[i][j];
				}
			}
		}
		List(){
		}
		List operator+(List &b){
			int c[2][2];
			for(int i=0;i<2; i++){
						for(int j=0;j<2;j++){
							c[i][j]=a[i][j]+b.a[i][j];
						}
			}
			return List(c);
		}
		List operator-(List &b){
			int c[2][2];
			for(int i=0;i<2;i++){
						for(int j=0;j<2;j++){
							c[i][j]=a[i][j]-b.a[i][j];
						}
			}
			return List(c);
		}
		void disp(){
			cout<<a[0][0]<<" "<<a[0][1]<<endl;
			cout<<a[1][0]<<" "<<a[1][1]<<endl;
			
		}
	private:
		int a[2][2];
};

int main(){
	List a(1,2,3,4);
//	List b(5,6,7,8);
//	int b1[2][2];
	int q[4];
	for(int i = 0;i<4;i++){
	
		cin>>q[i];
	}
	int b1[][2]={{q[0],q[1]},{q[3],q[4]}};
	List b(b1);
	List c;
	c = a+b;
	c.disp();
	return 0;
}
