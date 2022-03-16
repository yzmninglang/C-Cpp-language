# 函数模板

## 函数模板的基本语法

抽象函数的返回值和形参类型

```cpp
void func(int a)
```

变为

```cpp
T func(T a) #T是一个参数
```

语法

```cpp
template<typename T> #typename也可以用class替换
#函数声明或者定义
```

template ---声明创建模板

typename--- 后面接数据类型可用class代替

T---通用数据类型，名称可以替换，比如W C

```cpp
template<class T>
void MySwap(T &a,T &b)
{
	T temp =a;
	a=b;
	b=temp;
}
```

调用函数模板

```cpp
	//自动函数推导 ，自动推导int 
	MySwap(a,b); 
	//显示指定参数
	MySwap<double>(a1,b1); 
```

[代码演示](./func_T.cpp)

## 函数模板的注意事项

自动类型推导，第一，数据类型必须一致

```cpp
template<typename T>
void myswap(T &a,T &b)
{
    ...
}
char c='c';
int a=1;
myswap(a,c);//推导出错，必须类型一致
```

第二，模板必须确定T的数据类型，否则无法使用 

```cpp
 template<class T>
void func()
{
	cout<<"func"<<endl;
}

void test1()
{
//	func();  incorrect //函数模板没有指定类型
	func<int>();//正确，即使不需要，也要指定类型
}
```

[代码演示](./func_T1.cpp)

## 函数模板的案例

* 使用模板封装函数，对不同类型的数组进行排序
* 排序规则从大到小，选择排序
* 使用char数组和int数组测试

[测试代码](./templateNo1.cpp)







# 类模板

