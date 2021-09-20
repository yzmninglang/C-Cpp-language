---
title: C&&C++问题总汇(1)
category: coding
---

# 二维数组

定义一个二维数组如下:

```c
int a[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };
```

如果采用一个指针去指向这个数组，可以这么做:

```c
int (*p)[4]=a; //4代表了一行有多少个元素
```

其中`*p`要加括号，因为不加括号就是指针数组,而且但是，这时候的`*p`（p指针指向的数据不在是一个`int`的数，而是一个数组，代表的是第i行的所有元素）

```c
sizeof(*p);
Output: 16
```

那么访问这个二维数组的指针方法是:

```c
a[i][j]=*(*(p+i)+j);
```

当然，下面这种方式也对(和一维数组的指针一样)

```c
a[i][j]=p[i][j];
```

<img src="https://picturnl.oss-cn-shanghai.aliyuncs.com/Y7D20b8621AY6CYryYagUED1.jpg" alt="Y7D20b8621AY6CYryYagUED1" style="zoom: 33%;" />

* 指针数组是这样子的吗？

```c
char *strs[3] ={"chinese","zhonguo" } ;//3代表两个string元素，一个'\0'
```
这里使用的就是指针数组,所以这里是3（数组中元素的个数+1），而上面的那个是4数组个每个元素的下一级个数。

## 二维数组赋值的问题

* 二维数组有两个维度，当然可以按照一个一个去赋值，但那样毕竟太慢，所以有没有更好的赋值方法呢？

```c
	int q[4];
	for(int i = 0;i<4;i++){
	
		cin>>q[i];
	}
	int b1[][2]={{q[0],q[1]},{q[3],q[4]}};
```

这是我现在使用的方法，并不是十分的好，希望有所改进

* 友元函数访问私有成员问题

```c
//习题5-18

//报错，a[2][2]是私有成员，不可在operator中访问
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
		friend operator+(List &a,List &b);
		friend operator-(List &a,List &b);
		void disp(){
			cout<<a[0][0]<<" "<<a[0][1]<<endl;
			cout<<a[1][0]<<" "<<a[1][1]<<endl;
			
		}
	private:
		int a[2][2];
};
List operator+(List a,List b){
	int c[2][2];
	for(int i=0;i<2; i++){
				for(int j=0;j<2;j++){
					c[i][j]=a.a[i][j]+b.a[i][j];
				}
	}
	return List(c);
}
List operator-(List &a,List &b){
	int c[2][2];
	for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					c[i][j]=a.a[i][j]-b.a[i][j];
				}
	}
	return List(c);
}
int main(){
	List a(1,2,3,4);

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
```



## 指针的指针

```c
int **p;
//使用方法
int **p; //定义一个指针的指针
int *q;	//定义一个int型的指针
int a[3]={1,2,3};
q = a;	//q指向a
p =&q; //p指向q
printf("%d",*(*p+1)); //所以*p展现了q，*（*p）为q展现自己储存的地址的内容
return 0;
```

* 所以说，这个`int`有用吗？

```c
*((int *)a+n*i+j);  
```

* 函数的分号问题

```c
T sum(){
    .....
}

T sum(){
    .....
};   //这个分号是否有必要？
```

