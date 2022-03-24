# 线性表

线性表是 n (≥0) 个数据元素的有限线性序列，记作$(a_1,a_2,a_3,...,a_n)$,$a_i$是数据元素，n表示长度

分类：

存储方式：

* 线性表：数组
* 链表：节点

性质：

* 除第一个元素外，其他每一个元素有一个且仅有一个直接前驱
* 除最后一个元素外，其他每一个元素有一个且仅有一个直接后继

线性表的$ADT$,[什么是ADT](https://baike.baidu.com/item/ADT/18299805)

```cpp
ADT LinearList{
    数据: n(>=0)个原子表项的一个有限序列;
    函数：
        查找（）
        添加（）
        求长度（）
        求空间（）
        插入数据（）
        修改数据（）
        ....
}
```

存取结构:

* 顺序存取，时间性能是$O(n)$
* 随机存取, 时间性能是$O(1)$

## 顺序表

<font color='red'>顺序表是线性表的一种储存方式</font>，这是一种储存方式！！！！

他是以随机存取为主要的存取方式，他的时间性能为$O(1)$,由于没有指针域的存在，他的空间效率相对于链式存储的方式使用效率更高，下图是他的空间结构

![image-20220319221210087](LinearList.assets/image-20220319221210087.png)

作为线性表的子类，他相对于线性表来说更加的具体，线性表的作为基类没有具体函数的实现，甚至没有数据成员，但是顺序表除了基类的功能之外还有以下的一些新：

* 该类所包含的数据`data`
* 数据成员的最大空间`maxSize`
* 现在已有的数据的大小，列表的长度`n`



```cpp
template<class T>
class SeqList:public LinearList<T>{
protected:
	T * data;  //顺序储存控制的数据列表
	int maxSize;   //该表的容量
	int n;    //该表已有的数据大小

	//两种排序方式
	void ReverseSort();	
	void ForwardSort();
public:
	SeqList(int sz=defaultSize); //构造函数
	SeqList(T a[],int i);
	~SeqList(); //析构函数
	int Size()const;
	int Length()const;
	int Search(T x)const;
	bool Insert(int i,T x);
	bool Remove (int i,T &x);   //删除并且返回删除的数据
	void Output();
	void Sort(int m); //实现正序，逆序的排列
	LinearList<T>operator=(LinearList<T> &L);
};
```

### 功能实现

#### 析构函数(`~SeqList()`)

对于顺序表而言，他所要实现的析构函数，只需要直接使用`delete` data数组，不需要像链式储存一样一个个释放空间，相对而言较为简单

```cpp
delete []data;
```

### 构造函数(`SeqList()`)

#### 无参构造

构造函数在这个里面相对是比较简单的，因为它主要负责申请空间，所以一般不需要传递参数给它，只需要像在函数体内`new`maxSize的大小给data即可

```cpp
data= new T[sz];
```

#### 有参构造

当然，如果需要实现在创建的时候初始化顺序表，那么，可以如下传入一个数组，然后逐一进行复制

```cpp
data = new T[i]
    this->maxSize=i;	//指定列表的容量
this->n=0;
for(int j=0;j<sizeof(a)/sizeof(a[0]),j++)
{
    data[j]=a[j]  //实现传入一个列表作为初始的数据
        this->n++;
}
```

#### Remove函数

remove函数的思想就是，在原来的i位置的基础，全部往前移动一位，那么程序可以像下面这样

![image-20220319222714682](LinearList.assets/image-20220319222714682.png)

```cpp
for(int j=i;j<n-1;j++)
{
    data[j]=data[j+1]
}
n--; //整个的数量减少
```

#### Insert函数

如果要实现在i位置的后方插入一个数，<font color='red'>那么必须从后面往前面插入</font>，绝对不要从i->n,所以整个程序的的图形解释为

![image-20220319223342618](LinearList.assets/image-20220319223342618.png)

```cpp
for(int j = n;j>i；j--)
{
    data[j]=data[j-1];	//最后一次为j=i+1,data[i]->data[i+1]
}
data[i]=x;				//将data[i]换成我们希望替换的值
this->n++;
return true;
```

## 链表

* 带头节点，第一个的数据域为空

```mermaid
graph LR
    p(指针) --> head[头结点]
    head-->A[a1]
   	A-->|...|tair[尾节点]
```

单链表在实现的功能其实和之前的线性表差不多，因为他们的结果是一致的，只是使用的储存方式存在差异，所以，单链表的实现主要是注重链表的数据储存方式

### 有参构造和无参构造

#### 无参构造

对于无参构造，我们希望在刚开始的时候实现一个指针和一个头节点

```mermaid
graph LR
p[指针]-->head(头结点)
```

那么我们后期的使用方式为

```cpp
LinkList<int> L;
L.Insert(0,1);
L.Insert(1,2);
L.Insert(2,19);
```

这是，构造函数需要给`first`指针指向一个`data`为空的头节点

```cpp
template<class T>
LinkList<T>::LinkList(/* args */)
{
    first= new Node<T>;         //生成头结点
    this->n=0;
}
```

#### 有参构造

传递的参数为一个数组，使用数组初始化该链表，所以在构造函数中也需要实现`first`指针指向`head`,然后往后添加

```cpp
template<class T>
LinkList<T>::LinkList(T a[],int b)
{
    first=new Node<T>; //表头结点
    Node<T> *p,*ptr;
    p=first;   //首先指向表头的指针
    for (int i = 0; i < b; i++)
    {
        ptr=new Node<T>;
        ptr->data=a[i];
        p->next=ptr;
        p=p->next;
    }
    this->n=b;
}
```

这里一定要切记，Node任何时候使用的时候都要加上`<T>`，并且，数组的传值实质上指针的传值，<font color='red'>因此我们必须要将数组的大小传入函数之中</font>

### 析构函数

析构函数主要是需要一个一个逐一的销毁节点，那么由于不是使用for循环来进行，而是判断条件`p!=NULL`来判断，所以`while`，每到一个结点，用指针指向下一个结点，然后删除此节点

### Search函数

Search函数和析构函数一样，要用while来判断

```cpp
template<class T>
int LinkList<T>::Search(T data)
{
    Node<T> *p;
    p=first->next;
    int loc=0;
    while(p!=NULL && p->data!=data)   //这种地方的while必须要记清楚
    {
        p=p->next;  //如果data不匹配以及没有到表的最后一位，那么需要前行
        loc++;
    }
    if(p==NULL)
    {
        return -1;  //没找到，返回-1
    }
    else{
        return loc; //找到了，返回位置编码,（第一位是1）
    }
}
```

### Insert函数

在遍历的时候加上n++

```cpp
template<class T>
void LinkList<T>::Insert(int i,T data) //第一位标号是1,插入至第i位的后面
{
    Node<T> *p=first;
    Node<T> *paf;
    for(int j=0;j<i;j++)
    {
        p=p->next;
    }
    paf=new Node<T>;
    paf->data=data;   //创建一个结点，该结点的数值为data
    paf->next=p->next;  //将p的next传入paf的next
    p->next=paf;    //将p->next指向paf的结点
}
```

[总项目](./LinkList)

















