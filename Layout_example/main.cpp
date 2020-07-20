#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication lApplication(argc, argv);
    Widget lWidget;

    lWidget.show();

    return lApplication.exec();
}
