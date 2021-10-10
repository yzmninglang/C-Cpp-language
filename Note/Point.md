---
title: Pointer
category: coding
---

#  Pointer Category

* Pointer point the constant:

  ```c
  const char *name = "chen"    //statement a pointer point a constant
  ```

  because using `const`,so the Pointer can't change variable in the address which it point ,so the statement as follows is incorrect :

  ```c
  name[3]='a'					//incorrect,pointer "name" can't change constant 
  ```

  but name is a normal pointer ,so it could change the items it point,statement as follows are correct:

  ```c
  name = 'zhang'				//change the address the pointer point ,correct
  ```

  Also,Even you have  changed your string you point ,you still can't change the string, Please somebody tell me why ,Thank you !

  ```C
  name[3]='y'					//incorrect,but I don't know why!
  ```

  

* Constant Pointer

  A pointer can't change the address it point ,but it still can change the content it point,example:

  ```c
  char *const name ="chen";     //define a constant pointer
  name[3] = 'a';					//correct ,it can change the constent of pointer
  name = "zhang";					//incorrect ,it can't change the address it points
  ```

* Constant Pointer points to constant

  A constant pointer points a constant ,the address pointer point is unchangeable and the content of address is  unchangeable,example :

  ```c
  const char *const name="chen";	//define a constant pointer point the constant
  name[3] = 'q';					//incorrect ,the constant is unchangeable
  name ='ninglang';				//incorrect ,the address pointed is unchangeable 
  ```

* Const

  Using a const to define a `integer` variable ,the keyword omitted is acceptable the definition as following is same:

  ```c
  const int LIMITS = 100;
  const LIMITS = 100;
  ```

  formal parameters also can be describe by `const`,for example:

  ```c
  int MAX(const int*ptr)
  ```

  the method promise the array can't be changed ,only be read.

# Pointer array

```c
#include<stdio.h>

int main(void){
    char *arr[3]={'abc','def','ghi'};
    char *pArr = arr[0];
    printf("The string array arr's element :");
    for(int index=0;index<3;index++){
        printf("%s",arr[index]);
    }
    printf("\n");
    printf("The string arr's first element's every element:");
    for(int index = 0;index<3;index++){
        printf("%c",*(pArr+index));
    }
    printf("\n");
    return 0;
}
```

in fact , you see the definition of Pointer array ,It is like as follows:

```c
char *arr[3]={'abc','def','ghi'};
```

```c
char *pChar1 = 'abc',*pChar2 = 'def',*pChar3='ghi'
char *arr[3] = {pChar1,pChar2,pChar3};
```

At the same time :

```c
arr[0] = pChar;   //the arr first element is the pointer pChar
```

and the `pChar` is pointing the 'abc''s first element 'a', so we can use the code to print 'a'

```c
printf("%c",pChar[0]);   //print 'a'
// print'a','b','c'
for(int i = 0;i<3;i++){
    printf("%c ",pChar[i]);
}
```

# Pointer Function

```c
int fun(int x,int y);			//normal function return integers
```

This function declaration is normal ,but There are  some difference in next function declaration

```c
int *fun(int x,int y)
```

This function declaration is pointer function ,the return is a pointer to `int` ,This is an address

# Pointer To Function

To state a pointer to function ,which is a Pointer pointing function .declaration form:

```c
int (*fun)(int x,int y)
```

There are two ways to assign values to pointer variables

```c
fun = &function;
fun = function;
```

There are also two ways to call pointer to function

```c
x=(*fun)();
x=fun();
```

Example:

```c
#include<stdio.h>
#include<iostream>
using namespace std;
int add(int x,int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int (*fun)(int x,int y);
int main(){
	//first kind 
	fun = add;
	cout<<"(*fun)(1,2)="<<(*fun)(1,2)<<endl;
    //second kind
	fun = &sub;
	cout<<"(*fun)(5,3)="<<(*fun)(5,3)<<" "<<fun(5,3);
	
	
	return 0;
	
}
```



# New and Delete

operation `new` can get a space from heap and return the pointer to point the first address of the memory,and `delete` can free the space 

```c
int *p;
p = new int ; //new dynamically allocate an integer memory space,assign the first address to pointer variable


delete p;   	//free the space allocated by new
```

`new` assign space for multidimensional array:

```c
int i = 3;
int *pi = new int[3][4];
```

`new` assign space with initial value:

```c
#include<iostream>
using namespace std;
int main(){
	int *p;
	p = new int(99);      //initial value
	cout<<*p;
	delete p;
	return 0;
}
```





# Malloc  && Free get space





