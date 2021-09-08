---
title: C && C++ (2)
category: coding
---

Object-oriented programming start

<!-- more -->

# Class	

* struct expansion

```c
#include<iostream>
#include<cmath>
using namespace std;
struct Complex{
	double real;
	double imag;
	void init(double r,double i){
		real=r;imag = i;
	}
	double abs()
	{
		return sqrt(real*real+imag*imag);
	}
};

int main(){
	struct Complex A;
	A.init(1.2,3.4);
	cout<<"The complex number A's abs ="<<A.abs()<<endl;
	return 0;
}
```



function is defined in `struct` ,and `real && imag` is data member ,`init && abs` is function member,using this way ,We can encapsulate the properties of an object in a structure. When we want to use this struct to calculate something, we can directly call the properties function or properties data.

* class

definite a class, it is just like a struct above 

```c
class Complex{
    double real;
    double imag;
    void init(double r,double i){
		real=r;imag = i;
	}
	double abs()
	{
		return sqrt(real*real+imag*imag);
	}
};
```

but unfortunately,There will be two errors,because default class's data and function is private . No people can call them in outside of class. so we can change data into private, and function into public

```c
class Complex{
    private:
        double real;
        double imag;
    public:
        void init(double r,double i){
            real=r;imag = i;
        }
        double abs()
        {
            return sqrt(real*real+imag*imag);
        }
};
```

* Use pointers to access variables

we can definite a pointer to class ,Then the member of this class can be accessed by pointer 

```c
class Date{
    public:
    	int year;
}

Date d,*ptr;  //define a Date pointer 
ptr =&d;  //pointer ptr points to Date d
ptr->year;  //use ptr to access to year
```

so there are three kind equivalent expression to access to variable year

```c
d.year;
(*ptr).year;
ptr->year;
```

members of class can't be assigned with initial value:

```c
class Complex{
    double real = 0;
    double imag = 0;	//in class declaration member data can't be assigned
};
```

If **all** of members are public ,Then you can initialize class when you definite a object

```c
class Complex{
    public:
    	double real;
    	double imag;
};
Complex c1={1.1,2.2};
```

# Constructor

constructor is used to initialize class ,so we can define a function named class name ,That help us remember 

```c
class Complex{
    private:
    	....
    public:
    	Complex(double x,double i){		//no return type
            real = x;imag =i;
        }
    	....
    	
}
```

* member initialization list

member initialized by the order they are declared 

```c
#include<iostream>
using namespace std;
class D{
	public:
		D(int i):mem2(i),mem1(mem2+1){
			cout<<"mem1="<<mem1<<" "<<"mem2="<<mem2<<endl;
		}
	private:
		int mem1;		//mem1 defined firstly
		int mem2;		//mem2 defined secondly
};
int main(){
	D d(15);
	return 0;
}
```









 



