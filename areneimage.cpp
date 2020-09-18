#include "areneimage.h"
#include "ui_areneimage.h"
#include <QPainter>
#include "widget.h"

AreneImage::AreneImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AreneImage)
{
    ui->setupUi(this);
}

AreneImage::~AreneImage()
{
    delete ui;
}

void AreneImage::paintEvent(QPaintEvent *event)
{
   QPainter painter(this);
   if(cNumber == 6)
   {
       painter.drawLine(308,173,358,173);
       painter.drawLine(308,176,358,176);//
       painter.drawLine(358,173,383,216);
       painter.drawLine(383,216,358,259);
       painter.drawLine(381,214,356,257);//
       painter.drawLine(358,259,308,259);
       painter.drawLine(308,259,283,216);
       painter.drawLine(310,257,285,214);//
       painter.drawLine(283,216,308,173);
   }
   if(cNumber == 7)
   {
       painter.drawLine(308,173,358,173);
       painter.drawLine(308,176,358,176);//
       painter.drawLine(358,173,383,216);
       painter.drawLine(383,216,358,259);
       painter.drawLine(381,214,356,257);//
       painter.drawLine(358,259,308,259);
       painter.drawLine(308,259,283,216);
       painter.drawLine(310,257,285,214);//
       painter.drawLine(283,216,308,173);
       painter.drawLine(383,216,433,216);
   }
   if(cNumber == 8)
   {
       painter.drawLine(308,173,358,173);
       painter.drawLine(308,176,358,176);//
       painter.drawLine(358,173,383,216);
       painter.drawLine(383,216,358,259);
       painter.drawLine(381,214,356,257);//
       painter.drawLine(358,259,308,259);
       painter.drawLine(308,259,283,216);
       painter.drawLine(310,257,285,214);//
       painter.drawLine(283,216,308,173);
       painter.drawLine(383,216,433,216);
       painter.drawLine(358,259,383,302);

       painter.drawLine(666+308,173,666+358,173);
       painter.drawLine(666+308,176,666+358,176);//
       painter.drawLine(666+358,173,666+383,216);
       painter.drawLine(666+383,216,666+358,259);
       painter.drawLine(666+381,214,666+356,257);//
       painter.drawLine(666+358,259,666+308,259);
       painter.drawLine(666+308,259,666+283,216);
       painter.drawLine(666+310,257,666+285,214);//
       painter.drawLine(666+283,216,666+308,173);
       painter.drawLine(666+383,216,666+433,216);
       painter.drawLine(666+308,259,666+283,302);

       painter.drawLine(1332+308,173,1332+358,173);
       painter.drawLine(1332+308,176,1332+358,176);//
       painter.drawLine(1332+358,173,1332+383,216);
       painter.drawLine(1332+383,216,1332+358,259);
       painter.drawLine(1332+381,214,1332+356,257);//
       painter.drawLine(1332+358,259,1332+308,259);
       painter.drawLine(1332+308,259,1332+283,216);
       painter.drawLine(1332+310,257,1332+285,214);//
       painter.drawLine(1332+283,216,1332+308,173);
       painter.drawLine(1332+383,216,1332+433,216);
       painter.drawLine(1332+283,216,1332+233,216);

       painter.drawLine(308,432+173,358,432+173);
       painter.drawLine(308,432+176,358,432+176);//
       painter.drawLine(358,432+173,383,432+216);
       painter.drawLine(383,432+216,358,432+259);
       painter.drawLine(381,432+214,356,432+257);//
       painter.drawLine(358,432+259,308,432+259);
       painter.drawLine(308,432+259,283,432+216);
       painter.drawLine(310,432+257,285,432+214);//
       painter.drawLine(283,432+216,308,432+173);
       painter.drawLine(383,432+216,433,432+216);
       painter.drawLine(433,432+216,458,432+259);

   }
   if(cNumber == 9)
   {
       painter.drawLine(308,173,358,173);
       painter.drawLine(308,176,358,176);//
       painter.drawLine(358,173,383,216);
       painter.drawLine(383,216,358,259);
       painter.drawLine(381,214,356,257);//
       painter.drawLine(358,259,308,259);
       painter.drawLine(308,259,283,216);
       painter.drawLine(310,257,285,214);//
       painter.drawLine(283,216,308,173);
       painter.drawLine(383,216,433,216);
       painter.drawLine(358,259,383,302);
       painter.drawLine(358,173,383,216);

       painter.drawLine(666+308,173,666+358,173);
       painter.drawLine(666+308,176,666+358,176);//
       painter.drawLine(666+358,173,666+383,216);
       painter.drawLine(666+383,216,666+358,259);
       painter.drawLine(666+381,214,666+356,257);//
       painter.drawLine(666+358,259,666+308,259);
       painter.drawLine(666+308,259,666+283,216);
       painter.drawLine(666+310,257,666+285,214);//
       painter.drawLine(666+283,216,666+308,173);
       painter.drawLine(666+383,216,666+433,216);
       painter.drawLine(666+283,216,666+233,216);
       painter.drawLine(666+358,259,666+383,302);

       painter.drawLine(1332+308,173,1332+358,173);
       painter.drawLine(1332+308,176,1332+358,176);//
       painter.drawLine(1332+358,173,1332+383,216);
       painter.drawLine(1332+383,216,1332+358,259);
       painter.drawLine(1332+381,214,1332+356,257);//
       painter.drawLine(1332+358,259,1332+308,259);
       painter.drawLine(1332+308,259,1332+283,216);
       painter.drawLine(1332+310,257,1332+285,214);//
       painter.drawLine(1332+283,216,1332+308,173);
       painter.drawLine(1332+383,216,1332+433,216);
       painter.drawLine(1332+308,259,1332+283,302);
       painter.drawLine(1332+308,173,1332+283,130);

       painter.drawLine(308,432+173,358,432+173);
       painter.drawLine(308,432+176,358,432+176);//
       painter.drawLine(358,432+173,383,432+216);
       painter.drawLine(383,432+216,358,432+259);
       painter.drawLine(381,432+214,356,432+257);//
       painter.drawLine(358,432+259,308,432+259);
       painter.drawLine(308,432+259,283,432+216);
       painter.drawLine(310,432+257,285,432+214);//
       painter.drawLine(283,432+216,308,432+173);
       painter.drawLine(383,432+216,433,432+216);
       painter.drawLine(433,432+216,458,432+259);
       painter.drawLine(358,432+259,383,432+302);


       painter.drawLine(666+308,432+173,666+358,432+173);
       painter.drawLine(666+308,432+176,666+358,432+176);//
       painter.drawLine(666+358,432+173,666+383,432+216);
       painter.drawLine(666+383,432+216,666+358,432+259);
       painter.drawLine(666+381,432+214,666+356,432+257);//
       painter.drawLine(666+358,432+259,666+308,432+259);
       painter.drawLine(666+308,432+259,666+283,432+216);
       painter.drawLine(666+310,432+257,666+285,432+214);//
       painter.drawLine(666+283,432+216,666+308,432+173);
       painter.drawLine(666+383,432+216,666+433,432+216);
       painter.drawLine(666+433,432+216,666+458,432+259);
       painter.drawLine(666+308,432+259,666+283,432+302);

       painter.drawLine(1332+308,432+173,1332+358,432+173);
       painter.drawLine(1332+308,432+176,1332+358,432+176);//
       painter.drawLine(1332+358,432+173,1332+383,432+216);
       painter.drawLine(1332+383,432+216,1332+358,432+259);
       painter.drawLine(1332+381,432+214,1332+356,432+257);//
       painter.drawLine(1332+358,432+259,1332+308,432+259);
       painter.drawLine(1332+308,432+259,1332+283,432+216);
       painter.drawLine(1332+310,432+257,1332+285,432+214);//
       painter.drawLine(1332+283,432+216,1332+308,432+173);
       painter.drawLine(1332+383,432+216,1332+433,432+216);
       painter.drawLine(1332+433,432+216,1332+458,432+259);
       painter.drawLine(1332+283,432+216,1332+233,432+216);

       painter.drawLine(308,864+173,358,864+173);
       painter.drawLine(308,864+176,358,864+176);//
       painter.drawLine(358,864+173,383,864+216);
       painter.drawLine(383,864+216,358,864+259);
       painter.drawLine(381,864+214,356,864+257);//
       painter.drawLine(358,864+259,308,864+259);
       painter.drawLine(308,864+259,283,864+216);
       painter.drawLine(310,864+257,285,864+214);//
       painter.drawLine(283,864+216,308,864+173);
       painter.drawLine(383,864+216,433,864+216);
       painter.drawLine(433,864+216,458,864+259);
       painter.drawLine(458,864+259,508,864+259);

       painter.drawLine(666+308,864+173,666+358,864+173);
       painter.drawLine(666+308,864+176,666+358,864+176);//
       painter.drawLine(666+358,864+173,666+383,864+216);
       painter.drawLine(666+383,864+216,666+358,864+259);
       painter.drawLine(666+381,864+214,666+356,864+257);//
       painter.drawLine(666+358,864+259,666+308,864+259);
       painter.drawLine(666+308,864+259,666+283,864+216);
       painter.drawLine(666+310,864+257,666+285,864+214);//
       painter.drawLine(666+283,864+216,666+308,864+173);
       painter.drawLine(666+383,864+216,666+433,864+216);
       painter.drawLine(666+433,864+216,666+458,864+259);
       painter.drawLine(666+433,864+216,666+458,864+173);


   }






}
