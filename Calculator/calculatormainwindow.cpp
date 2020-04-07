#include "calculatormainwindow.h"
#include <QPushButton>
#include <QGridLayout>
#include <QLCDNumber>
#include <QSignalMapper>


void CalculatorMainWindow :: slotClear()
{

    lcdNumber->display(0);
    mSum = 0;
    mNextNumber = 0;
}

void CalculatorMainWindow::slotButtonPressed(int pNum)
{
    mNextNumber = pNum;
    lcdNumber->display(pNum);
}

void CalculatorMainWindow::slotPlusEqual()
{
    mSum += mNextNumber;
    lcdNumber->display(mSum);
    mNextNumber = 0;
}

void CalculatorMainWindow :: createWidgets ( )
{
QGridLayout * lCalcLayout = new QGridLayout ;
setLayout ( lCalcLayout ) ;
lcdNumber = new QLCDNumber;
pushButton = new QPushButton ( " 1 " ) ;
pushButton_2 = new QPushButton ( " 2 " ) ;
pushButton_3 = new QPushButton ( " 3 " ) ;
pushButton_4 = new QPushButton ( " 4 " ) ;
pushButton_5 = new QPushButton ( " 5 " ) ;
pushButton_6 = new QPushButton ( " 6 " ) ;
pushButton_7 = new QPushButton ( " 7 " ) ;
pushButton_8 = new QPushButton ( " 8 " ) ;
pushButton_9 = new QPushButton ( " 9 " ) ;
pushButton_10 = new QPushButton ( " 0 " ) ;
pushButtonC = new QPushButton ( " C " ) ;
pushButtonPlus = new QPushButton ( " +/= " ) ;
lCalcLayout ->addWidget ( lcdNumber , 0 , 0 , 1 , 4) ;
lCalcLayout ->addWidget ( pushButton , 1 , 0) ;
lCalcLayout ->addWidget ( pushButton_2 , 1 , 1) ;
lCalcLayout ->addWidget ( pushButton_3 , 1 , 2) ;
lCalcLayout ->addWidget ( pushButton_4 , 2 , 0) ;
lCalcLayout ->addWidget ( pushButton_5 , 2 , 1) ;
lCalcLayout ->addWidget ( pushButton_6 , 2 , 2) ;
lCalcLayout ->addWidget ( pushButton_7 , 3 , 0) ;
lCalcLayout ->addWidget ( pushButton_8 , 3 , 1) ;
lCalcLayout ->addWidget ( pushButton_9 , 3 , 2) ;
lCalcLayout ->addWidget ( pushButton_10 , 4 , 0 , 1 , 3) ;
lCalcLayout ->addWidget ( pushButtonC , 1 , 3) ;
lCalcLayout ->addWidget ( pushButtonPlus , 2 , 3 , 3 , 1) ;
pushButton ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_2 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_3 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_4 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_5 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_6 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_7 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_8 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_9 ->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButton_10->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButtonC->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
pushButtonPlus->setSizePolicy ( QSizePolicy :: Preferred , QSizePolicy :: Preferred ) ;
lcdNumber->setFixedHeight (50) ;
}


CalculatorMainWindow :: CalculatorMainWindow ( QWidget * parent ) : QWidget ( parent )
{
resize (300 , 300) ;
setWindowTitle ( "SimpleCalculator" ) ;
createWidgets ( ) ;
connect(pushButtonC,SIGNAL(clicked()),this,SLOT(slotClear()),Qt::UniqueConnection);
connect(pushButtonPlus,SIGNAL(clicked()),this,SLOT(slotPlusEqual()),Qt::UniqueConnection);
mMapper = new QSignalMapper(this);
connect(pushButton,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_2,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_3,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_4,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_5,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_6,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_7,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_8,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_9,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
connect(pushButton_10,SIGNAL(clicked()),mMapper,SLOT(map()),Qt::UniqueConnection);
mMapper->setMapping(pushButton,1);
mMapper->setMapping(pushButton_2,2);
mMapper->setMapping(pushButton_3,3);
mMapper->setMapping(pushButton_4,4);
mMapper->setMapping(pushButton_5,5);
mMapper->setMapping(pushButton_6,6);
mMapper->setMapping(pushButton_7,7);
mMapper->setMapping(pushButton_8,8);
mMapper->setMapping(pushButton_9,9);
mMapper->setMapping(pushButton_10,0);
slotClear();
connect(mMapper,SIGNAL(mapped(int)),this,SLOT(slotButtonPressed(int)),Qt::UniqueConnection);
}
