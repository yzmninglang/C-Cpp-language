#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QDebug>
#include<QColorDialog>
#include<QMessageBox>
#include<QFileDialog>
#include<QFontDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //click the botton
    connect(ui->actionoen,&QAction::triggered,[=](){
//        QDialog dlg(this);
//        dlg.resize(200,100);
//        dlg.exec();


//        qDebug()<<"modal dialog!";



//        //non-modal dialog
//        QDialog *dig2 =new QDialog(this);
//        dig2->show();
//        dig2->setAttribute(Qt::WA_DeleteOnClose);

//        QMessageBox::critical(this ,"critical","wrong");
//        QMessageBox::information(this ,"info","wrong");
//        if (QMessageBox::Save== QMessageBox::question(this ,"ques","nihao",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel)){
//            qDebug()<<"Save!!!!!";
//        }

//        QColor color = QColorDialog::getColor(QColor(255,0,0));
//        qDebug()<<"r="<<color.red()<<" g="<<color.green()<<" b="<<color.blue();
//        QString str = QFileDialog::getOpenFileName(this,"open","C:\\Users\\ninglang\\Desktop","(*.cpp)");
//        qDebug()<<str;


        //font
//        bool flag;
//        QFont font = QFontDialog::getFont(&flag,QFont("宋体",36));
//        qDebug() <<"font:"<<font.family()<<" size:"<<font.pointSize()<<" bold:"<<font.bold()<<" Itatic:"<<font.italic();



    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
