#include<iostream>
using namespace std;


//选择排序算法
template<typename T>
void MySort(T arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		int max=i ;
		//寻找在i之后比i大的数的位置 
		for (int j = i+1;j<len;j++)
		{
			if(arr[max]<arr[j])
			{
				max = j;
			}
		}
		//第一轮结束之后将max对应的值移到前面 
		if(max!=i)
		{
			T temp=arr[i];
			arr[i]=arr[max];
			arr[max]=temp;
		}
	}
 } 

template<class T>
void print(T arr[],int len)
{
	for(int i =0 ;i<len;i++)
	{
		cout<<arr[i];
	}
}


void test()
{
	char carr[]="basdfgew";
	int cari[]={1,2,3,4,5};
	//将无序的char数组传入 
	MySort(carr,sizeof(carr)/sizeof(char)); 
	//将无序的int数组传入 
	MySort(cari,sizeof(cari)/sizeof(int)); 
	print(cari,5);
	
} 

int main()
{
	test();
}
