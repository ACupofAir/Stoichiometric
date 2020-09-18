#include "image.h"
#include "ui_image.h"
#include <QPainter>
#include "widget.h"
#include <QDebug>

image::image(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::image)
{
    ui->setupUi(this);
}

image::~image()
{
    delete ui;
}

void image::paintEvent(QPaintEvent *event)
{
   QPainter painter(this);
//    if(t == 1){
//        painter.drawLine(0,0,2160,1440);
//    }
//    else if(t == 2) {
//        painter.drawLine(0,1440,2160,0);
//    }
//   for(int i = 0; i < t; i++) {
//      for (int j = 0; j < 3; ++j)     //输出
//      {
//           for (int k = 0; k < 8; ++k)
//            {
//                  qDebug() << o[k][j][0][i] << " q" << o[k][j][1][i] << "#   ";
//            }
//            qDebug() << endl;
//      }
//      qDebug()<<endl;					  //输出end
//
//    }

   for(int i = 0; i < t; i++) {
       if(o[1][0][0][i]==1) {
           painter.drawLine(42+(i%3)*666,118+(i/3)*217,126+(i%3)*666,98+(i/3)*217);
       }
       if(o[2][0][0][i]==1) {
           painter.drawLine(126+(i%3)*666,98+(i/3)*217,210+(i%3)*666,118+(i/3)*217);
       }
       if(o[3][0][0][i]==1) {
           painter.drawLine(210+(i%3)*666,118+(i/3)*217,294+(i%3)*666,98+(i/3)*217);
       }
       if(o[4][0][0][i]==1) {
           painter.drawLine(294+(i%3)*666,98+(i/3)*217,378+(i%3)*666,118+(i/3)*217);
       }
       if(o[5][0][0][i]==1) {
           painter.drawLine(378+(i%3)*666,118+(i/3)*217,462+(i%3)*666,98+(i/3)*217);
       }
       if(o[6][0][0][i]==1) {
           painter.drawLine(462+(i%3)*666,98+(i/3)*217,546+(i%3)*666,118+(i/3)*217);
       }
       if(o[7][0][0][i]==1) {
           painter.drawLine(546+(i%3)*666,118+(i/3)*217,630+(i%3)*666,98+(i/3)*217);
       }

       // first round end
       if(o[1][1][0][i]==1) {
           painter.drawLine(126+(i%3)*666,98+(i/3)*217,126+(i%3)*666,8+(i/3)*217);
       }
       if(o[1][2][0][i]==1) {
           painter.drawLine(126+(i%3)*666,98+(i/3)*217,126+(i%3)*666,198+(i/3)*217);
       }
       if(o[2][1][0][i]==1) {
           painter.drawLine(210+(i%3)*666,118+(i/3)*217,210+(i%3)*666,28+(i/3)*217);
       }
       if(o[2][2][0][i]==1) {
           painter.drawLine(210+(i%3)*666,118+(i/3)*217,210+(i%3)*666,208+(i/3)*217);
       }
       if(o[2][1][1][i]==1) {
           painter.drawLine(210+(i%3)*666,28+(i/3)*217,294+(i%3)*666,8+(i/3)*217);
       }
       if(o[3][1][0][i]==1) {
           painter.drawLine(294+(i%3)*666,98+(i/3)*217,294+(i%3)*666,8+(i/3)*217);
       }
       if(o[4][1][0][i]==1) {
           painter.drawLine(378+(i%3)*666,118+(i/3)*217,378+(i%3)*666,28+(i/3)*217);
       }
   }

}
