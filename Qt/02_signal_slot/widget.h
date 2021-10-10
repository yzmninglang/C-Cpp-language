#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"studnet.h"
#include"teacher.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    Teacher *zt;
    Studnet *st;
    void classover();
};

#endif // WIDGET_H
