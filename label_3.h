#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_label_3.h"
#include <QtWidgets/QLabel>
#include <vector>
#include <QtCore/QTimer>
#include <QtCore/QString>
#include <QtGui/QPixmap>

class label_3 : public QMainWindow
{
    Q_OBJECT

signals:
    void finish();
public slots:
    void display();
public:
    label_3(QWidget *parent = Q_NULLPTR);
    int max(int array[7]);
private:
    Ui::label_3Class ui;
    QLabel* label;
    std::vector<int> vect;  //store the emotions number in file
    std::vector<int> count; //store the max emotion in ten frames
    QTimer* timer;
    int temp = 0;
    QPixmap neutral, happy, angry, sad, surprise, fear, disgust;
};
