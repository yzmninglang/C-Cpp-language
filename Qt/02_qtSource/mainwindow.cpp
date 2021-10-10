#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->actionNew->setIcon(QIcon("C:\\Users\\ninglang\\Desktop\\google.png"));

    //add source
    ui->actionNew->setIcon(QIcon(":/Image/google.png"));
    ui->actionopen->setIcon(QIcon(":/Image/file-open.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
