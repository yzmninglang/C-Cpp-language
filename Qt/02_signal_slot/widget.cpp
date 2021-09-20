#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>


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
    connect(btn,&QPushButton::clicked,this,&Widget::classover);

    //no signals connect to slots
    void(Teacher:: *teachersignal2)(void)=&Teacher::hungry;
    void(Studnet:: *studentslot2)(void) = &Studnet::treat;
    connect(zt,teachersignal2,st,studentslot2);

    //signal connect
    connect(btn,&QPushButton::clicked,zt,teachersignal2);


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
