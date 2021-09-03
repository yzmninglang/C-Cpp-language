---
title: C && C++ (1)
category: coding
---

# Function 

* Function declaration

  if Function declaration's parameter is empty of `void`,This two declaration in c++ are same :

  ```c
  f();				//This function don't carray any parameters
  f(void);			//This function don't carray any parameters
  ```

  but they are different in c:

  ```c
  f(void);			//This function don't carray any parameters
  f();				//Don't give the information of parameters ,It have chance to carrary 						//paramters
  ```

* Macro definition 

  Macro definition may cause some error that we can't  expect ,for example:

  ```c
  #include <iostream>
  using namespace std;
  #define doub(x) x*2
  int main()
  {
  	for(int i =1 ;i<4;i++)
  		cout<<i<<" doubled is "<<doub(i)<<endl;
  	cout<<"1+2 doubled is "<<doub(1+2)<<endl;
  	return 0;
  }
  ```

  in line 8 ,we are expecting the result is :

  ```c
  1+2 doubled is 6
  ```

  but in fact ,the result is :

  ```c
  1+2 double is 5
  ```

  because the macro definition is replace the expression in the place where it is called :

  ```c
  cout<<"1+2 doubled is "<<doub(1+2)<<endl;
  cout<<"1+2 doubled is "<<1+2*2<<endl;
  ```

* Inline function

  to avoid the unsafe of Marco definition ,We can use inline function to replace the macro function to achieve more safe :

  ```c
  #include <iostream>
  using namespace std;
  inline int doub(int x);
  int main()
  {
  	for(int i =1 ;i<4;i++)
  		cout<<i<<" doubled is "<<doub(i)<<endl;
  	cout<<"1+2 doubled is "<<doub(1+2)<<endl;
  	return 0;
  }
  inline int doub(int x){
      return x*2;
  }
  ```

* function with default value of parameters

  the parameters with default value must be in the right of parameters with no initial value:

  ```c
  int fun(int i ,int j=5,int k);     //incorrect 
  int fun(int i,int j,int k=5);      //correct
  ```

  

* Function Overloading

  The same function name can be used to define different tasks

  ```c
  #include <iostream>
  using namespace std;
  int square(int i)
  {
      return i*i;
  }
  long square(long i)
  {
      return i*i;
  }
  double square(double i)
  {
      return i*i;
  }
  int main()
  {
      int i =12;
      long j =1234;
      double k =1.23;
      cout<<"int i'quare is "<<square(i)<<endl;
      cout<<"long j's quare is "<<square(j)<<endl;
      cout<<"double k's quare is "<<square(k)<<endl;
      return 0;
  }
  ```

  if only the type of return is not the same ,the numbers of parameter and the type of parameters is same,The function couldn't be overloaded:

  ```c
  int nihao(int x,int y);
  void nihao(int x,int y);     //That is incorrect ,because only the type of return is not the same 
  ```

  if the overloading function with default value parameter, it can be incorrect :

  ```c
  void nihao(int a,int b=0);
  void nihao(int a);				//This is also incorrect the compiler can't decide which function should be choosed 
  ```

# Scope operator ::

* Priority

  Local variables have higher priority than global variables

  ```c
  #include<iostream>
  using namespace std;
  int avar =10;			//global variable
  int main()
  {
  	int avar=3;			//local variable
  	cout<<"avar is "<<avar<<endl;
  	return 0;
  }
  ```

  if global variables wants to be called in function ,we can add `::` in the front of variables

  ```c
  cout<<"local variable"<<avar<<endl;
  cout<<"global variable"<<::avar<<endl;
  ```

# Union

* What is the Union 

  Union is a custom type ,we can create union in two way in c:

  ```c
  union data{
      int n;
      char ch;
      double f;
  };
  union data a,b,c;
  
  //second way
  union data{
      int n;
      char ch;
      double f;
  }a,b,c;
  ```

  union's space is the largest memory footprint  of all member ,`int`,`char`,`double`,the double's  memory footprint is largest ,so the union data's memory footprint is 8 bits(the size of `double`)

  ```c
  #include<stdio.h>
  
  union data{
  	int n;
  	char ch;
  	short m;
  };
  
  int main()
  {
  	union data a;
  	printf("%d,%d\n",sizeof(a),sizeof(union data));
  	a.n = 0x40;
  	printf("%X,%c,%hX\n",a.n,a.ch,a.m);
  	a.ch ='9';
  	printf("%X,%c,%hX\n",a.n,a.ch,a.m);
  	a.m = 0x2059;
  	printf("%X,%c,%hX\n",a.n,a.ch,a.m);
  	a.n =0x3e25ad54;
  	printf("%X,%c,%hX\n",a.n,a.ch,a.m);
  	
  	return 0;
  }
  ```

  you may get the result as follows:

  ```c
  4,4
  40,@,40
  39,9,39
  2059,Y,2059
  3E25AD54,T,AD54
  ```

  so the result prove that union members will have Influence each other, if  you change one member's value ,the other member's value is changed

* How to store data

  Union 's data is shared for all member ,so one of they is changed ,others will be effected,but the process is how to go

  ![image-20210903113323946](../../Machine%20learning/deeplearning.ai-andrew-ng-master/COURSE%203%20Structuring%20Machine%20Learning%20Projects/README.assets/image-20210903113323946.png)

* Using union 

  student information and teacher information is recorded by the same struct ,but some place are different,for example:

  | name | Num  | Sex  | Profession | Score/course |
  | ---- | ---- | ---- | ---------- | ------------ |
  | A    | 1    | f    | s          | 89           |
  | B    | 2    | m    | t          | math         |

  ```c
  #include<stdio.h>
  #include<stdlib.h>
  
  #define NUM 4
  struct{
  	char name[40];
  	int num;
  	char sex;
  	char pro;
  	union d{
  		int score;
  		char course[10];
  	}sc;
  } bodys[NUM];
  int main(){
  	int i;
  	for(i=0;i<NUM;i++)
  	{
  		printf("Please input info:");
  		scanf("%s %d %c %c",&bodys[i].name,&bodys[i].num,&bodys[i].sex,&bodys[i].pro);
  		if (bodys[i].pro == 's'){
  			scanf("%d",&bodys[i].sc.score);
  			printf("\n%s\t%d\t%c\t%c\t%d",
                     bodys[i].name,bodys[i].num,bodys[i].sex,bodys[i].pro,bodys[i].sc.score);
  		}
  		else{
  			scanf("%s",&bodys[i].sc.course);
  			printf("\n%s\t%d\t%c\t%c\t%s",
                     bodys[i].name,bodys[i].num,bodys[i].sex,bodys[i].pro,bodys[i].sc.course);
  		}
  	}
  	return 0;
  }
  ```

  