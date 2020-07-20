#include "widget.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QLineEdit *lLineEdit = new QLineEdit("Text 1");
    QLabel *lLabel = new QLabel("Line &1");
    QHBoxLayout *lHBoxLayout = new QHBoxLayout;
    lHBoxLayout->addWidget(lLabel);
    lHBoxLayout->addWidget(lLineEdit);
    QLineEdit *lLineEdit2 = new QLineEdit("Text 2");
    QLabel *lLabel2 = new QLabel("Line &2");
    QHBoxLayout *lHBoxLayout2 = new QHBoxLayout;
    lHBoxLayout2->addWidget(lLabel2);
    lHBoxLayout2->addWidget(lLineEdit2);
    QPushButton *lPushButtonOk = new QPushButton("&Ok");
    QPushButton *lPushButtonCancel = new QPushButton("&Cancell");
    QHBoxLayout *lHBoxLayout3 = new QHBoxLayout;
    lHBoxLayout3 ->addStretch();
    lHBoxLayout3 ->addWidget(lPushButtonOk);
    lHBoxLayout3 ->addWidget(lPushButtonCancel);
    QVBoxLayout *LVBoxLayout =new QVBoxLayout;
    LVBoxLayout->addLayout(lHBoxLayout);
    LVBoxLayout->addLayout(lHBoxLayout2);
    LVBoxLayout->addLayout(lHBoxLayout3);
    setLayout(LVBoxLayout);
}



