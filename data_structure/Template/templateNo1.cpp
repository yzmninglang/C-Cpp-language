#include<iostream>
using namespace std;


//ѡ�������㷨
template<typename T>
void MySort(T arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		int max=i ;
		//Ѱ����i֮���i�������λ�� 
		for (int j = i+1;j<len;j++)
		{
			if(arr[max]<arr[j])
			{
				max = j;
			}
		}
		//��һ�ֽ���֮��max��Ӧ��ֵ�Ƶ�ǰ�� 
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
	//�������char���鴫�� 
	MySort(carr,sizeof(carr)/sizeof(char)); 
	//�������int���鴫�� 
	MySort(cari,sizeof(cari)/sizeof(int)); 
	print(cari,5);
	
} 

int main()
{
	test();
}
