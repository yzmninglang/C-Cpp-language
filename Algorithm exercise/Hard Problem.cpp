#include<string>
#include<iostream>
using namespace std;
int find(string *b,string a){
    for(int i =0 ;i<13;i++){
        if(a.find(b[i])){
            return i;
        }
    }
    return 0;
}


int main()
{
    char a[20];
    cin.get(a,20);
//    char a[20];
//    for(int i=0; i<2;i++){
//    	a[i]=g[i];
//	}
//    cout<<a[-1]<<"nihao";
//    while(cin)
//    cin>>a;
//    cin>>a;
//    int hard[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    string b[13]={"B","2B","3B","4B","5B","6B","HB","H","2H","3H","4H","5H","6H"};
    int c;
	c=find(b,a)+1;
    cout<<c;
    return 0;
//	for(int i =0;i<13;i++){
//		cout<<b[i]<<endl;
//	}
//	return 0;
    
}

