#include "widget.h"
#include "ui_widget.h"
#include<QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->rbtnman->setChecked(true);

    bool ret;
    connect(ui->rbtnwoman,&QRadioButton::clicked,[=](){
        qDebug()<<"woman";
    });
    connect(ui->checkBox_5,&QCheckBox::stateChanged,[=](int state){
       qDebug()<<state;
    });


    QListWidgetItem *item = new QListWidgetItem("锄禾日当午");
    ui->listWidget->addItem(item);
    item->setTextAlignment(Qt::AlignHCenter);

    QStringList list;
    list<<"nihao"<<"xiaoan"<<"bucuo"<<"nihaikeyi";
    ui->listWidget->addItems(list);
}

Widget::~Widget()
{
    delete ui;
}
