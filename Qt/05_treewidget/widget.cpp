#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    //tree widget
    ui->treeWidget->setHeaderLabels(QStringList ()<<"hero"<<"introduce");
    QTreeWidgetItem *item = new QTreeWidgetItem(QStringList()<<"Power");
    ui->treeWidget->addTopLevelItem(item);
    QTreeWidgetItem *ch = new QTreeWidgetItem(QStringList()<<"google");
    item->addChild(ch);

}

Widget::~Widget()
{
    delete ui;
}
