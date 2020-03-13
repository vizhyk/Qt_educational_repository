#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>

class parentwidget : public QWidget
{
    Q_OBJECT
public:
    explicit parentwidget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // PARENTWIDGET_H
