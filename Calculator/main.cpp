#include "calculatormainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication lApplication(argc, argv);
    CalculatorMainWindow lCalcMainWindow;
    lCalcMainWindow.show();

    return lApplication.exec();
}
