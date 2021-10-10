#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QTextEdit>
#include<QDockWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600,400);

    //menu
    QMenuBar *bar= menuBar();
    setMenuBar(bar);


    //create menu
    QMenu * fileMenu = bar->addMenu("file");
    QMenu * Menu = bar->addMenu("edit");

    //create action of menu
    QAction *newAction = fileMenu->addAction("new");
    fileMenu->addSeparator();
    QAction *newAction1 = fileMenu->addAction("open");

    //create Qtoolbar

    QToolBar *toolbar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolbar);
    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    toolbar->setMovable(false);
    toolbar->addAction(newAction);
    toolbar->addSeparator();
    toolbar->addAction(newAction1);

    QPushButton *btn =new QPushButton("aa",this);
    toolbar->addWidget(btn);

    QStatusBar *stBar =statusBar();

    setStatusBar(stBar);
    QLabel *label2 = new QLabel("nihao",this);
    stBar->addWidget(label2);

    QLabel *label1 = new QLabel("bucuo",this);
    stBar->addPermanentWidget(label1);

    //float windows
    QDockWidget *dockWidget = new QDockWidget("float",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
    //Set up post-dock
    dockWidget->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);;


    //core ,just one
    QTextEdit *edit = new QTextEdit(this);
    setCentralWidget(edit);

}

MainWindow::~MainWindow()
{

}
