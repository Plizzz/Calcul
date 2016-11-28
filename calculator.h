#pragma once

#include <QWidget>
#include <QStack>

class QLCDNumber;
class QPushButton;


class Calculator : public QWidget
{
    Q_OBJECT
private:
    QLCDNumber* m_plcd;
    QStack<QString> m_stk;
    QString m_strDisp;

public:
    Calculator(QWidget *parent = 0);
    ~Calculator();

    QPushButton* createButton(const QString& str);
    void calculate();

public slots:
    void slotButtonClicked();
};
