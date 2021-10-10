#include "widget.h"
#include <QPushButton>  //Button control header

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn =new QPushButton;

    btn->setParent(this);
    btn->setText("First Button");
    btn->move(100,100);

    setFixedSize(600,400);
    QPushButton *btn1 =new QPushButton("Second Button",this);
    btn1->move(100,200);
    connect(btn1,&QPushButton::clicked,this,&QWidget::close);
}
Widget::~Widget()
{

}
