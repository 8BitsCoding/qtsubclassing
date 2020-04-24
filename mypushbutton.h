#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    MyPushButton(QWidget *parent = nullptr) : QPushButton(parent) {}
};

#endif // MYPUSHBUTTON_H
