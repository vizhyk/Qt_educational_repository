#include "parentwidget.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
parentwidget::parentwidget(QWidget *parent) : QWidget(parent)
{
QLabel *lLabel = new QLabel(this);
lLabel -> setGeometry(200,250,200,250);
lLabel ->setText("Text label");
QPushButton *lPushButton = new QPushButton(this);
lPushButton->setGeometry(50,50,100,30);
lPushButton->setText("Press Button");
QLineEdit *lLineEdit = new QLineEdit(this);
lLineEdit->setGeometry(50,100,100,30);
lLineEdit->setText("Line for Text");
lLineEdit->selectAll();
setGeometry(x(),y(),300,150);
setWindowTitle("Parent Widget Example");
}


