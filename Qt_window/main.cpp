#include <QApplication>
#include "parentwidget.h"

int main (int lArgc, char* lArgv[])
{
   QApplication lApplication (lArgc,lArgv);
   parentwidget lParentWidget;
   lParentWidget.move(100,200);
   lParentWidget.show();
    return lApplication.exec();
}
