#include "alkyen.h"
#include "ui_alkyen.h"
#include <QPainter>
#include "widget.h"
#include <QString>
#include <QDebug>

alkyen::alkyen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alkyen)
{
    ui->setupUi(this);
    QString title;
    title +="C";
    title +=char(cNumber+48);
    title +="H";
    title +=(hNumber<10?char(hNumber+48):char(49));
    if(hNumber>9)title +=char(hNumber-10+48);
    QWidget::setWindowTitle(title);
    qDebug() << title;

}

alkyen::~alkyen()
{
    delete ui;
}

void alkyen::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    //Waiting to DongHao
    int i = 0;

        if (cNumber == 2)
        {
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180-5, 120 + (i % 3) * 640, 82 + (i / 3) * 180-5); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180+5, 120 + (i % 3) * 640, 82 + (i / 3) * 180+5); //1
        }
        else if (cNumber == 3)
        {
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
        }
        else if (cNumber == 4)
        {
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180-5, 200 + (i % 3) * 640, 98 + (i / 3) * 180-5); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180+5, 200 + (i % 3) * 640, 98 + (i / 3) * 180+5); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
        }
        else if (cNumber == 5)
        {
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4

            i++;
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5, 200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5, 200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
        }
        else if (cNumber == 6)
        {
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5, 200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5, 200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180-5, 280 + (i % 3) * 640, 82 + (i / 3) * 180-5); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180+5, 280 + (i % 3) * 640, 82 + (i / 3) * 180+5); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1 + (i / 3) * 180); //8

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180-5, 360 + (i % 3) * 640, 98 + (i / 3) * 180-5); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180+5, 360 + (i % 3) * 640, 98 + (i / 3) * 180+5); //4
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1  + (i / 3) * 180); //8

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 17 + (i / 3) * 180); //10

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82  + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98  + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82  + (i / 3) * 180); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //3
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1   + (i / 3) * 180); //8
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 163 + (i / 3) * 180); //9
        }
        else if (cNumber == 7)
        {
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(440 + (i % 3) * 640, 82 + (i / 3) * 180, 520 + (i % 3) * 640, 98 + (i / 3) * 180); //6

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5, 200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5); //2
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5, 200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(440 + (i % 3) * 640, 82 + (i / 3) * 180, 520 + (i % 3) * 640, 98 + (i / 3) * 180); //6

            i++;
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(440 + (i % 3) * 640, 82 + (i / 3) * 180, 520 + (i % 3) * 640, 98 + (i / 3) * 180); //6

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1  + (i / 3) * 180); //8

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5, 360 + (i % 3) * 640, 98 + (i / 3) * 180 - 5); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5, 360 + (i % 3) * 640, 98 + (i / 3) * 180 + 5); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1  + (i / 3) * 180); //8

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180-5, 440 + (i % 3) * 640, 82 + (i / 3) * 180-5); //5
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180+5, 440 + (i % 3) * 640, 82 + (i / 3) * 180+5); //5
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1  + (i / 3) * 180); //8

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 17 + (i / 3) * 180); //10

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180-5, 360 + (i % 3) * 640, 98 + (i / 3) * 180-5); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180+5, 360 + (i % 3) * 640, 98 + (i / 3) * 180+5); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 17 + (i / 3) * 180); //10

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180, 440 + (i % 3) * 640, 82 + (i / 3) * 180); //5
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180-5, 440 + (i % 3) * 640, 82 + (i / 3) * 180-5); //5
            painter.drawLine(360 + (i % 3) * 640, 98 + (i / 3) * 180+5, 440 + (i % 3) * 640, 82 + (i / 3) * 180+5); //5
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 17 + (i / 3) * 180); //10

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82  + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98  + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82  + (i / 3) * 180); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //3
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98  + (i / 3) * 180); //4
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1   + (i / 3) * 180); //8
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 163 + (i / 3) * 180); //9

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82  + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98  + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82  + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98  + (i / 3) * 180); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5, 360 + (i % 3) * 640, 98 + (i / 3) * 180 - 5); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5, 360 + (i % 3) * 640, 98 + (i / 3) * 180 + 5); //4
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1   + (i / 3) * 180); //8
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 163 + (i / 3) * 180); //9

            i++;
            painter.drawLine(40 + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180 - 5, 360 + (i % 3) * 640, 98 + (i / 3) * 180 - 5); //4
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180 + 5, 360 + (i % 3) * 640, 98 + (i / 3) * 180 + 5); //4
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 120 + (i % 3) * 640, 1  + (i / 3) * 180); //8
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 17 + (i / 3) * 180); //10

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82  + (i / 3) * 180); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98  + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82  + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98  + (i / 3) * 180); //4
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 17  + (i / 3) * 180); //10
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 179 + (i / 3) * 180); //11

            i++;
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180, 120 + (i % 3) * 640, 82 + (i / 3) * 180); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 - 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 - 5); //1
            painter.drawLine(40  + (i % 3) * 640, 98 + (i / 3) * 180 + 5, 120 + (i % 3) * 640, 82 + (i / 3) * 180 + 5); //1
            painter.drawLine(120 + (i % 3) * 640, 82 + (i / 3) * 180, 200 + (i % 3) * 640, 98 + (i / 3) * 180); //2
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 280 + (i % 3) * 640, 82 + (i / 3) * 180); //3
            painter.drawLine(280 + (i % 3) * 640, 82 + (i / 3) * 180, 360 + (i % 3) * 640, 98 + (i / 3) * 180); //4
            painter.drawLine(200 + (i % 3) * 640, 98 + (i / 3) * 180, 200 + (i % 3) * 640, 17 + (i / 3) * 180); //10
            painter.drawLine(200 + (i % 3) * 640, 17 + (i / 3) * 180, 280 + (i % 3) * 640, 1  + (i / 3) * 180); //12
        }

}
