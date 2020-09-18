#include "cyclaneimage.h"
#include "ui_cyclaneimage.h"
#include <QPainter>
#include <widget.h>

CyclaneImage::CyclaneImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CyclaneImage)
{
    ui->setupUi(this);
}

CyclaneImage::~CyclaneImage()
{
    delete ui;
}

void CyclaneImage::paintEvent(QPaintEvent *event)
{
   QPainter painter(this);
   if(cNumber == 3)
   {
       painter.drawLine(333,104,383,191);
       painter.drawLine(383,191,283,191);
       painter.drawLine(283,191,333,104);
   }
   if(cNumber == 4)
   {
       painter.drawLine(283,112,383,112);
       painter.drawLine(383,112,383,212);
       painter.drawLine(383,212,283,212);
       painter.drawLine(283,212,283,112);

       painter.drawLine(666+333,104,666+383,191);
       painter.drawLine(666+383,191,666+283,191);
       painter.drawLine(666+283,191,666+333,104);
       painter.drawLine(666+333,104,666+333,54);
   }
   if(cNumber == 5)
   {
       painter.drawLine(303,122,363,122);
       painter.drawLine(363,122,381,179);
       painter.drawLine(381,179,333,212);
       painter.drawLine(333,212,285,179);
       painter.drawLine(285,179,303,122);

       painter.drawLine(666+283,112,666+383,112);
       painter.drawLine(666+383,112,666+383,212);
       painter.drawLine(666+383,212,666+283,212);
       painter.drawLine(666+283,212,666+283,112);
       painter.drawLine(666+383,112,666+453,42);

       painter.drawLine(1332+333,104,1332+383,191);
       painter.drawLine(1332+383,191,1332+283,191);
       painter.drawLine(1332+283,191,1332+333,104);
       painter.drawLine(1332+283,191,1332+197,241);
       painter.drawLine(1332+383,191,1332+469,241);

       painter.drawLine(333,325+104,383,325+191);
       painter.drawLine(383,325+191,283,325+191);
       painter.drawLine(283,325+191,333,325+104);
       painter.drawLine(333,325+104,333,325+54);
       painter.drawLine(333,325+54, 417,325+1);

       painter.drawLine(666+333,325+104,666+383,325+191);
       painter.drawLine(666+383,325+191,666+283,325+191);
       painter.drawLine(666+283,325+191,666+333,325+104);
       painter.drawLine(666+333,325+104,666+403,325+33);
       painter.drawLine(666+333,325+104,666+262,325+33);

   }
   if(cNumber == 6)
   {
       painter.drawLine(308,119,358,119);
       painter.drawLine(358,119,383,162);
       painter.drawLine(383,162,358,205);
       painter.drawLine(358,205,308,205);
       painter.drawLine(308,205,283,162);
       painter.drawLine(283,162,308,119);

       painter.drawLine(666+303,122,666+363,122);
       painter.drawLine(666+363,122,666+381,179);
       painter.drawLine(666+381,179,666+333,212);
       painter.drawLine(666+333,212,666+285,179);
       painter.drawLine(666+285,179,666+303,122);
       painter.drawLine(666+333,212,666+333,272);

       painter.drawLine(1332+283,112,1332+383,112);
       painter.drawLine(1332+383,112,1332+383,212);
       painter.drawLine(1332+383,212,1332+283,212);
       painter.drawLine(1332+283,212,1332+283,112);
       painter.drawLine(1332+283,212,1332+213,282);
       painter.drawLine(1332+383,212,1332+453,282);

       painter.drawLine(283,325+112,383,325+112);
       painter.drawLine(383,325+112,383,325+212);
       painter.drawLine(383,325+212,283,325+212);
       painter.drawLine(283,325+212,283,325+112);
       painter.drawLine(453,325+282,553,325+282);
       painter.drawLine(383,325+212,453,325+282);

       painter.drawLine(666+283,325+112,666+383,325+112);
       painter.drawLine(666+383,325+112,666+383,325+212);
       painter.drawLine(666+383,325+212,666+283,325+212);
       painter.drawLine(666+283,325+212,666+283,325+112);
       painter.drawLine(666+383,325+212,666+483,325+212);
       painter.drawLine(666+383,325+212,666+383,325+312);

       painter.drawLine(1332+283,325+112,1332+383,325+112);
       painter.drawLine(1332+383,325+112,1332+383,325+212);
       painter.drawLine(1332+383,325+212,1332+283,325+212);
       painter.drawLine(1332+283,325+212,1332+283,325+112);
       painter.drawLine(1332+283,325+112,1332+213,325+42);
       painter.drawLine(1332+383,325+212,1332+453,325+282);     //

       painter.drawLine(333,650+104,383,650+191);
       painter.drawLine(383,650+191,283,650+191);
       painter.drawLine(283,650+191,333,650+104);
       painter.drawLine(333,650+104,333,650+4);
       painter.drawLine(283,650+191,197,650+241);
       painter.drawLine(383,650+191,469,650+241);

       painter.drawLine(666+333,650+104,666+383,650+191);
       painter.drawLine(666+383,650+191,666+283,650+191);
       painter.drawLine(666+283,650+191,666+333,650+104);
       painter.drawLine(666+283,650+191,666+197,650+241);
       painter.drawLine(666+383,650+191,666+469,650+241);
       painter.drawLine(666+469,650+241,666+569,650+241);

       painter.drawLine(1332+333,650+104,1332+383,650+191);
       painter.drawLine(1332+383,650+191,1332+283,650+191);
       painter.drawLine(1332+283,650+191,1332+333,650+104);
       painter.drawLine(1332+333,650+104,1332+333,650+4);
       painter.drawLine(1332+333,650+4,  1332+403,650+74);
       painter.drawLine(1332+333,650+4,  1332+263,650+74);

       painter.drawLine(333,975+104,383,975+191);
       painter.drawLine(383,975+191,283,975+191);
       painter.drawLine(283,975+191,333,975+104);
       painter.drawLine(333,975+104,333,975+4);
       painter.drawLine(333,975+4,403,  975+74);
       painter.drawLine(403,975+74,473, 975+4);


       painter.drawLine(666+333,975+104,666+383,975+191);
       painter.drawLine(666+383,975+191,666+283,975+191);
       painter.drawLine(666+283,975+191,666+333,975+104);
       painter.drawLine(666+333,975+104,666+403,975+33);
       painter.drawLine(666+333,975+104,666+262,975+33);
       painter.drawLine(666+403,975+33, 666+473,975+103);

       painter.drawLine(1332+333,975+104,1332+383,975+191);
       painter.drawLine(1332+383,975+191,1332+283,975+191);
       painter.drawLine(1332+283,975+191,1332+333,975+104);
       painter.drawLine(1332+333,975+104,1332+403,975+33);
       painter.drawLine(1332+333,975+104,1332+262,975+33);
       painter.drawLine(1332+383,975+191,1332+469,975+241);

   }


}
