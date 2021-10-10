#include<fstream>
#include<iostream>
using namespace std;

void test1(){
	//1.include header file
	
	
	//2.create iostream object
	
	ofstream ofs;
	
	
	//3.way to open
	
	ofs.open("./1.txt",ios::out);
	
	//4.write
	
	ofs<<"zhang san"<<endl;
	ofs<<"xinbie "<<endl;
	ofs<<"age  "<<endl;
	ofs.close(); 
	
	
}



int main(){
	test1();
	return 0; 
}
