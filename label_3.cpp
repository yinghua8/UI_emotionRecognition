#include "label_3.h"
#include <fstream>
#include <iostream>

label_3::label_3(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    neutral.load("neutral_ui_2.png");
    happy.load("happy_ui_2.png");
    sad.load("sad_ui_2.png");
    fear.load("fear_ui_2.png");
    disgust.load("disgust_ui_2.png");
    surprise.load("surprise_ui_2.png");
    angry.load("angry_ui_2.png");
    std::fstream file;
    std::fstream maxnum;
    timer = new QTimer(this);
    file.open("D:\\project\\Qt\\label_3(1120emotion)\\emotion_generator.txt");
    maxnum.open("D:\\project\\Qt\\label_3(1120emotion)\\max_num.txt");
    if (!file) return;
    int num;
    label = new QLabel(this);
    while (file >> num)
    {
        vect.push_back(num);
        //max_num << num << "\n";
        //label->setText(QString::number(num));
    }
    int arr[7] = {0};
    int temp = 1;
    for (int j = 0; j < vect.size(); j++)
    {
        temp += 1;
        arr[vect[j]] += 1;
        if (temp == 10)
        {
            int max_num = 0;
            max_num = max(arr);
            count.push_back(max_num);
            maxnum << max_num << "\n";
            for (int i = 0; i < 7; i++)
            {
                arr[i] = 0; //reset to zero to count again
            }
            temp = 1;
        }
        j += 1;
    }
    maxnum << 1000000000000;  //whole process finish
    connect(timer, SIGNAL(timeout()), this, SLOT(display()));
    timer->setInterval(1000);
    timer->start();

    connect(this, SIGNAL(finish()), timer, SLOT(stop()));
    
    file.close();
    maxnum.close();
}

void label_3::display()
{
    if (count[temp] == 0)
        label->setPixmap(neutral);
    else if (count[temp] == 1)
        label->setPixmap(angry);
    else if (count[temp] == 2)
        label->setPixmap(happy);
    else if (count[temp] == 3)
        label->setPixmap(sad);
    else if (count[temp] == 4)
        label->setPixmap(surprise);
    else if (count[temp] == 5)
        label->setPixmap(fear);
    else if (count[temp] == 6)
        label->setPixmap(disgust);
    label->adjustSize();
    temp += 1;
    if (temp == count.size())
        emit finish();
}

int label_3::max(int arr[7])  //found the most frequently appeared emotion in arr
{
    int max = 0;
    for (int j = 0; j < 7 - 1; j++)
    {
        if (arr[j] < arr[j + 1])
        {
            max = j + 1;
        }
    }
    return max;
}
