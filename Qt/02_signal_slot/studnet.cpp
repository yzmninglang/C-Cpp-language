#include "studnet.h"
#include<QDebug>
Studnet::Studnet(QObject *parent) : QObject(parent)
{

}
void Studnet::treat(){
    qDebug()<<"请老师吃饭!";
}
void Studnet::treat(QString foodName){
    //Qstring to char *
    qDebug()<<"老师吃"<<foodName.toUtf8().data();
}
