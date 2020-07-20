#ifndef CALCULATORMAINWINDOW_H
#define CALCULATORMAINWINDOW_H

#include <QWidget>
#include <QString>
//Предварительное объявление классов
class QPushButton ;
class QLCDNumber ;
class QSignalMapper;
class CalculatorMainWindow : public QWidget
{
Q_OBJECT
public :
explicit CalculatorMainWindow ( QWidget * parent = nullptr) ;

private :
int mSum ;
int mNextNumber ;
//Отдельный метод для создания интерфейса программы
void createWidgets ( ) ;
QSignalMapper *mMapper ;

private :
//Цифровые кнопки
QPushButton * pushButton ;
QPushButton * pushButton_2 ;
QPushButton * pushButton_3 ;
QPushButton * pushButton_4 ;
QPushButton * pushButton_5 ;
QPushButton * pushButton_6 ;
QPushButton * pushButton_7 ;
QPushButton * pushButton_8 ;
QPushButton * pushButton_9 ;
QPushButton * pushButton_10 ;
//Кнопка вывода результата и суммирования
QPushButton * pushButtonPlus ;
//Кнопка сброса результата
QPushButton * pushButtonC ;
//Виджет — цифровой дисплей
QLCDNumber * lcdNumber ;

private slots:
void slotClear();
void slotButtonPressed(int pNum);
void slotPlusEqual();

} ;



#endif // CALCULATORMAINWINDOW_H
