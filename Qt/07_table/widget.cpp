#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"name"<<"sex"<<"age");
    ui->tableWidget->setRowCount(5);

//    ui->tableWidget->setItem(0,0,new QTableWidgetItem("yashe"));
    QStringList namelist;
    namelist<<"yashe"<<"zhangfei"<<"zhaoyun"<<"huamula"<<"nihao"
    for(int i=0;i<5;i++){
        for(int j =0;j<3;j++){
            ui->tableWidget->setItem((i,j,new QTableWidgetItem(i)));
        }
    }

}

Widget::~Widget()
{
    delete ui;
}
