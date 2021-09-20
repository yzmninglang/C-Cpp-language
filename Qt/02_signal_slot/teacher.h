#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //custom signals
    //return is void,only declaration ,Needn't realize
    void hungry();
    void hungry(QString foodName);

public slots:
};

#endif // TEACHER_H
