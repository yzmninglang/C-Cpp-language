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

[案例代码](./templateNo1.cpp)

## 函数模板和普通函数

自动类型推导无法进行隐式转化，但是显示指定类型可以

```cpp
	int a=1,b=20;
	char c='c';
	cout<<Madd(a,b)<<endl;
//	cout<<Madd(c,b)<<endl;  //错误，无法隐形转化 
	cout<<Madd<int>(a,c)<<endl; //正确，可以隐形转化 
```

[自动推导和显示指定类型](./diff.cpp)

* 函数模板和普通函数，优先调用普通函数(使用空模板调用函数模板)

```cpp
print<>(a,b)
```

* 函数模板可以重载
* 函数模板优先匹配更好的函数模板

[重载时调用顺序](./sequence.cpp)

## 函数模板的局限性

```cpp
template<class T>
void f(T a ,T b)
{
    a=b;
}
```

如果a，b是数组，就不行

```cpp
template<class T>
void f(T a ,T b)
{
    a>b;
}
```

数据类型无法比较

这个时候，我们就可采用一个重载的方式，也就是，将模板特殊数据进行重载

例如

```cpp
template<class T>
bool myCompyter(T &a ,T &b){
}
 
//重载模板函数，实现对特殊数据类型进行处理 
template<> bool myCompyter(person &a ,person &b)
```

可以实现自定义类型的判断，比较

[源代码](./compare.cpp)

# 类模板

## 类模板的语法

建立一个通用类，类中的成员类型不确定，用一个虚拟的类型来代替

```cpp
template<class T>
类
```

实例：

定义一个类模板

```cpp
template<class NameType ,class Agetype>
class Person
{
	public:
		Person(NameType name ,Agetype age)
		{
			this->m_name=name;
			this->m_age=age;
		}
		NameType m_name;
		Agetype m_age;		
}; 
```

实例化对象：

```cpp
Person<string,int> p1("tom",99); //需要给模板类型参数
```

[源代码](./class_template.cpp)

## 类模板和函数区别

1、类模板不能自动类型推导,只能用显示指定类型

```cpp
template <class NameType ,class AgeType>
class Person
{}

Person p("sunwukong",1000);//错误，无法自动类型推导 
Person<string ,int >p("sunwukpng",100);//正确
```

2、类模板可以有默认类型参数

```cpp
template <class NameType=string ,class AgeType=int>
Person<>p2("zhubajie",100);//正确
```

[源代码](./func_class.cpp)

## 类模板的函数定义

类模板的函数定义是在使用的是时候定义的

```cpp
class Person1
{}
class Person2
{}

//定义类模板
template<class T>
class myclass 
{
    T obj;
    void person1()
    {
        obj.showPerson1();
    }
    void person2()
    {
        obj.showPerson2();
    }
}

//调用
Person1 p1;
myclass<Person1>c(p1); 
c.person1();//只能调用person1，不能调用person2，因为模板类型已确定 
```

[源代码](./function_member.cpp)

## 类模板对象作为函数参数

1、指定传入方式

```cpp
template<class T1,class T2>
class Person
{show()}

//1.指定调用类型的方式
void print(Person<string ,int>p) //这里要详细说明模板参数
{
	p.show();
} 
```



2、参数模板化

```cpp
//类型模板化
template<class T1,class T2>
void print1(Person<T1,T2>p) //参数用模板变量代替
{
	p.show();
} 
```



3、整个类模板化

```cpp
template<class T>
void print2(T p)//使用函数模板的机制
{
	p.show();
 } 
```

[源代码](.\transf.cpp)

## 类模板的继承

当类模板的父类是模板类的时候，子类没有办法直接继承父类，因为无法分配空间，这时，只需要给父类

提供具体的类型就可以了

```cpp
template<class T1 ,class T2>
class Person
{
	public:
		Person(T1 name,T2 age)}

//直接指明模板参数的具体类型
class person:Person<string ,int>
{	
};

```

​	第二种方式，就是子类作为模板类

```cpp
//子类作为模板类
template<class T1,class T2>
class person1:public Person<T1,T2>
{	public:
		person1(T1 name,T2 age):Person<T1,T2>(name,age){//构造函数的写法
		}
};
```

[源代码](./inherit.cpp)

## 成员函数的类外实现

由于是类模板的类，所以在外面实现的时候一定要记住

```cpp
template<class T1,class T2>
void Person<T1,T2>::show() //由于是类模板，所以在作用域的后面要传模板参数 
{}
```

[源代码](./func_out.cpp)

## 模板实例

自定义类型数组

实现，尾部删除，添加，数组赋值等功能

[源项目](./sample/template_ex2/template_ex2.vcxproj)

