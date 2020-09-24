#include "olefin_image.h"
#include "widget.h"
#include "ui_olefin_image.h"
#include <QPainter>
#include <QDebug>

Olefin_image::Olefin_image(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Olefin_image)
{
    ui->setupUi(this);
    QString title;
    title +="C";
    title +=char(cNumber+48);
    title +="H";
    title +=(hNumber<10?char(hNumber+48):char(49));
    if(hNumber>9)title +=char(hNumber-10+48);
    QWidget::setWindowTitle(title);
}

Olefin_image::~Olefin_image()
{
    delete ui;
}

void Olefin_image::paintEvent(QPaintEvent *event)
{
    qDebug()<<cNumber<<endl;

   QPainter painter(this);
   if(cNumber==2)
   {
       painter.drawLine(42,108,300,108);
       painter.drawLine(42,100,300,100);
   }
   if(cNumber==3)
   {
       painter.drawLine(42,108,300,108);
       painter.drawLine(42,100,300,100);
       painter.drawLine(300,104,489,279);
   }
   if(cNumber==4)
   {
       painter.drawLine(42,113,126,93);
       painter.drawLine(42,123,126,103);
       painter.drawLine(126,98,210,118);
       painter.drawLine(210,118,294,98);

       painter.drawLine(708,118,792,98);
       painter.drawLine(792,93,876,113);
       painter.drawLine(792,103,876,123);
       painter.drawLine(876,118,960,98);

       painter.drawLine(1374,113,1458,93);
       painter.drawLine(1374,123,1458,103);
       painter.drawLine(1458,98,1542,118);
       painter.drawLine(1458,98,1458,8);
   }
   if(cNumber==5)
   {
       painter.drawLine(42,113,126,93);
       painter.drawLine(42,123,126,103);
       painter.drawLine(126,98,210,118);
       painter.drawLine(210,118,294,98);
       painter.drawLine(294,98,378,118);

       painter.drawLine(708,118,792,98);
       painter.drawLine(792,93,876,113);
       painter.drawLine(792,103,876,123);
       painter.drawLine(876,118,960,98);
       painter.drawLine(960,98,1044,118);

       painter.drawLine(1374,113,1458,93);
       painter.drawLine(1374,123,1458,103);
       painter.drawLine(1458,98,1542,118);
       painter.drawLine(1542,118,1626,98);
       painter.drawLine(1458,98,1458,8);

       painter.drawLine(42,335,126,315);
       painter.drawLine(126,310,210,330);
       painter.drawLine(126,320,210,340);
       painter.drawLine(210,335,294,315);
       painter.drawLine(126,315,126,225);

       painter.drawLine(708,335,792,315);
       painter.drawLine(792,315,876,335);
       painter.drawLine(876,330,960,310);
       painter.drawLine(876,340,960,320);
       painter.drawLine(792,315,792,225);


   }
   if(cNumber==6)
   {
       painter.drawLine(42,113,126,93);
       painter.drawLine(42,123,126,103);
       painter.drawLine(126,98,210,118);
       painter.drawLine(210,118,294,98);
       painter.drawLine(294,98,378,118);
       painter.drawLine(378,118,462,98);

       painter.drawLine(708,118,792,98);
       painter.drawLine(792,93,876,113);
       painter.drawLine(792,103,876,123);
       painter.drawLine(876,118,960,98);
       painter.drawLine(960,98,1044,118);
       painter.drawLine(1044,118,1128,98);

       painter.drawLine(1374,118,1458,98);
       painter.drawLine(1458,98,1542,118);
       painter.drawLine(1542,113,1626,93);
       painter.drawLine(1542,123,1626,103);
       painter.drawLine(1626,98,1710,118);
       painter.drawLine(1710,118,1794,98);  //

       painter.drawLine(42,330,126,310);
       painter.drawLine(42,340,126,320);
       painter.drawLine(126,315,210,335);
       painter.drawLine(210,335,294,315);
       painter.drawLine(294,315,378,335);
       painter.drawLine(126,315,126,225);

       painter.drawLine(708,217+118,792,217+98);
       painter.drawLine(792,217+93,876, 217+113);
       painter.drawLine(792,217+103,876,217+123);
       painter.drawLine(876,217+118,960,217+98);
       painter.drawLine(960,217+98,1044,217+118);
       painter.drawLine(792,217+98,792, 217+8);

       painter.drawLine(1332+42, 217+118,1332+126,217+98);
       painter.drawLine(1332+126,217+98, 1332+210,217+118);
       painter.drawLine(1332+210,217+113,1332+294,217+93);
       painter.drawLine(1332+210,217+123,1332+294,217+103);
       painter.drawLine(1332+294,217+98, 1332+378,217+118);
       painter.drawLine(1332+126,217+98, 1332+126,217+8);

       painter.drawLine(42, 434+118,126,434+98);
       painter.drawLine(126,434+98, 210,434+118);
       painter.drawLine(210,434+118,294,434+98);
       painter.drawLine(294,434+93, 378,434+113);
       painter.drawLine(294,434+103,378,434+123);
       painter.drawLine(126,434+98, 126,434+8);       //

       painter.drawLine(666+42, 434+113,666+126,434+93);
       painter.drawLine(666+42, 434+123,666+126,434+103);
       painter.drawLine(666+126,434+98, 666+210,434+118);
       painter.drawLine(666+210,434+118,666+294,434+98);
       painter.drawLine(666+294,434+98, 666+378,434+118);
       painter.drawLine(666+210,434+118,666+210,434+208);

       painter.drawLine(1332+42, 434+118,1332+126,434+98);
       painter.drawLine(1332+126,434+93, 1332+210,434+113);
       painter.drawLine(1332+126,434+103,1332+210,434+123);
       painter.drawLine(1332+210,434+118,1332+294,434+98);
       painter.drawLine(1332+294,434+98, 1332+378,434+118);
       painter.drawLine(1332+210,434+118,1332+210,434+208);

       painter.drawLine(42, 651+118,126,651+98);
       painter.drawLine(126,651+98,210, 651+118);
       painter.drawLine(210,651+118,294,651+98);
       painter.drawLine(294,651+98,378, 651+118);
       painter.drawLine(205,651+118,205,651+208);
       painter.drawLine(215,651+118,215,651+208); //

       painter.drawLine(666+42, 651+118,666+126,651+98);
       painter.drawLine(666+126,651+98, 666+210,651+118);
       painter.drawLine(666+210,651+113,666+294,651+93);
       painter.drawLine(666+210,651+123,666+294,651+103);
       painter.drawLine(666+126,651+98, 666+126,651+8);
       painter.drawLine(666+126,651+98, 666+126,651+198);

       painter.drawLine(1332+42, 651+113,1332+126,651+93);
       painter.drawLine(1332+42, 651+123,1332+126,651+103);
       painter.drawLine(1332+126,651+98, 1332+210,651+118);
       painter.drawLine(1332+210,651+118,1332+294,651+98);
       painter.drawLine(1332+126,651+98, 1332+126,651+8);
       painter.drawLine(1332+210,651+118,1332+210,651+28);

       painter.drawLine(42, 868+118,126,868+98);
       painter.drawLine(126,868+93,210, 868+113);
       painter.drawLine(126,868+103,210,868+123);
       painter.drawLine(210,868+118,294,868+98);
       painter.drawLine(126,868+98,126, 868+8);
       painter.drawLine(210,868+118,210,868+28);


   }
}







