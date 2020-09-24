#include "alkyen.h"
#include "ui_alkyen.h"
#include <QPainter>
#include "widget.h"

alkyen::alkyen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alkyen)
{
    ui->setupUi(this);
}

alkyen::~alkyen()
{
    delete ui;
}

void alkyen::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    //Waiting to DongHao
    painter.drawLine(0,0,2160,1440);
}
