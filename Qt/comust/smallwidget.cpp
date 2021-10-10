#include "smallwidget.h"
#include "ui_smallwidget.h"
#include<QDebug>

smallWidget::smallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smallWidget)
{
    ui->setupUi(this);

    void(QSpinBox:: * spSignal)(int)= &QSpinBox::valueChanged;
    connect(ui->spinBox,spSignal,ui->horizontalSlider,&QSlider::setValue);
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);
    connect(ui->get,&QPushButton::clicked,[=](){
        getnum();
    });
    connect(ui->middle,&QPushButton::clicked,[=](){
        setnum(50);
    });
}
void smallWidget::setnum(int num){
    ui->spinBox->setValue(num);
}

void smallWidget::getnum(){
    qDebug()<<ui->spinBox->value();
}




smallWidget::~smallWidget()
{
    delete ui;
}
