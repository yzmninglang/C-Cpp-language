#ifndef STUDNET_H
#define STUDNET_H

#include <QObject>

class Studnet : public QObject
{
    Q_OBJECT
public:
    explicit Studnet(QObject *parent = nullptr);

signals:

public slots:
    // slots function area or declaration in public
    //return is void,need declaration ,and realize.
    void treat();
    void treat(QString foodName);
};

#endif // STUDNET_H
