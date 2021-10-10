#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>

namespace Ui {
class smallWidget;
}

class smallWidget : public QWidget
{
    Q_OBJECT

public:
    explicit smallWidget(QWidget *parent = nullptr);
    void setnum(int );
    void getnum();
    ~smallWidget();

private:
    Ui::smallWidget *ui;
};

#endif // SMALLWIDGET_H
