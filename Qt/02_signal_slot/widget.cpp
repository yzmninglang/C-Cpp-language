#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include<QDebug>
#include<iostream>
using namespace std;

//studnet class
//teacher class


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //create Teacher obj;
    this->zt = new Teacher(this);
    //create student obj;
    this->st = new Studnet(this);


//    //teacher hungry ,student treat
//    connect(zt,&Teacher::hungry,st,&Studnet::treat);
//    //call
//    classover();



    //connect parameter carry
    //pointer ->function
    void(Teacher:: *teachersignal)(QString)=&Teacher::hungry;
    void(Studnet:: *studentslot)(QString) = &Studnet::treat;

    connect(zt,teachersignal,st,studentslot);
    //classover();


    //press a button ,classover
    QPushButton *btn = new QPushButton("classover",this);
    resize(600,400);
    //connect(btn,&QPushButton::clicked,this,&Widget::classover);

    //no signals connect to slots
    void(Teacher:: *teachersignal2)(void)=&Teacher::hungry;
    void(Studnet:: *studentslot2)(void) = &Studnet::treat;
    connect(zt,teachersignal2,st,studentslot2);

    //signal connect
    connect(btn,&QPushButton::clicked,zt,teachersignal2);


    //signal disconnect()
    //QPushButton *btn1 = new QPushButton("disconnect",this);
    //disconnect(btn1,&QPushButton::clicked,st,studentslot2);

    //lambda func
    //[=](){
    //    btn->setText("Nihao");
    //}();

    QPushButton *mybtn = new QPushButton (this);
    QPushButton *mybtn1 = new QPushButton(this);
    mybtn->move(100,100);
    int m = 10;
    connect(mybtn,&QPushButton::clicked,this,[&m](){m = 100+10;qDebug()<<m;});
    connect(mybtn1,&QPushButton::clicked,this,[=](){qDebug()<<m;});
    qDebug()<<m;

    //int ret = []()->int{return 1000;}();
    //cout<<ret;
    QPushButton *btn3 = new QPushButton(this);
    btn3->setText("Open");
    btn3->move(100,0);
    connect(btn3,&QPushButton::clicked,this,&Widget::classover
//            [=](){
//        this->close();
//        emit zt->hungry("宫保鸡丁");});
//        btn3->move(200,100);
//        btn3->setText("Close");
//        Widget *pt = new Widget;
//        pt->show();
//    }
    );



}




void Widget::classover(){
    //classover,after called
//    emit zt->hungry();
    emit zt->hungry("宫保鸡丁");
}
Widget::~Widget()
{
    delete ui;
}
