#include<iostream>
using namespace std;
class Building{
	public:
		Building(int f=0,int r = 0,double a=0){
			floor =f;
			room =r;
			area =a;
		}
		void Show_info(){
			cout<<"floor,room,area="<<floor<<" "<<room<<" "<<area<<" "<<endl;
		}
	protected:
		int floor,room;
		double area;
};

class Home_Arch:public Building{
	public:
		Home_Arch(int f=0,int r = 0,double a=0,int woshi = 0,int keting = 0,int wash = 0,
		int chufang = 0):Building(f,r,a){
			bedroom = woshi;
			living = keting;
			wc = wash;
			kitchen = chufang;
		}
		void show(){
			Show_info();
			cout<<"bedroom,living,wc,kitchen"<<bedroom<<" "<<living<<" "<<wc<<" "<<kitchen<<endl;
		}
	protected:
		int bedroom,living,wc,kitchen;
		
};

class Office_Building:public Building{
	public:
		Office_Building(int f=0,int r = 0,double a=0,int of_r=0,int m_r =0):
			Building(f,r,a){
				office_room = of_r;
				meeting_room = m_r;
			}
		void show(){
			Show_info();
			cout<<"office room,meeting room="<<office_room<<" "<<meeting_room<<endl;
		}
	protected:
		int office_room,meeting_room;
};

class Hospital:public Building{
	public:
		Hospital(int f=0,int r = 0,double a=0,int w = 0,int op = 0):
			Building(f,r,a){
				wark = w;
				operate_room = op;
			}
		void show(){
			Show_info();
			cout<<"wark,operate room="<<wark<<" "<<operate_room<<endl;
		}
	protected:
		int wark,operate_room;
};

int main(){
	Hospital H1(5,3,3700,78,32);
	Office_Building O1(5,3,2222,34,44);
	Home_Arch A1(1,2,3,43,54,65,76);
	H1.show();
	O1.show();
	A1.show();
	return 0;
}

