---
title: Qt
category: coding
---

# 信号和槽

## 连接函数：connect

```c++
connect(信号发送者，发送的信号（函数的地址），信号接受者，处理的槽函数（函数的地址）);
connect(Button,&QpushButton::clicked,this,&Qwidget::close);
```

松散耦合：发送端和接受端的松散耦合

## 自定义槽函数和信号

* signal只能声明，不能定义，写在发送信号的类的`signals`中，返回值是void
* slot需要声明，需要在cpp文件中定义，写在`public slots`文件中，返回值是void

```c
class.h
public slots:
    // slots function area or declaration in public
    //return is void,need declaration ,and realize.
    void treat();
};


class.cpp
void Studnet::treat(){
    qDebug()<<"treat!";
}
```



```c
signals:
    //custom signals
    //return is void,only declaration ,Needn't realize
    void hungry();
```

定义槽和信号后，需要定义触发函数

```c
weidget:
	void classover();
	void classover(){
        emit zt->hungry();
    }
```

要先定义`connect`再调用`classover`。

### 信号的重载

信号函数和槽函数直接重载时，会因为二义性而导致程序无法编译，于是我们需要用函数指针来代替直接给地址，方法如下:

```c
    void(Teacher:: *teachersignal)(QString)=&Teacher::hungry;
    void(Studnet:: *studentslot)(QString) = &Studnet::treat;    
    
    connect(zt,teachersignal::hungry,st,studentslot);
```

* 问题：这里的两个函数指针是如何定义的？？？
* 答：

Qstring 转char * 

```c
Qstring.toUtf8().data()  //先转utf8，再转char*
```

### 信号连接信号



