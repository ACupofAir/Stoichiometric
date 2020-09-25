#include "widget.h"
#include "donghao_alkane.h"
#include "ui_widget.h"
#include <QGraphicsDropShadowEffect>
#include <QMouseEvent>
#include <QSpinBox>
#include <QPainter>
#include <QImage>
#include <QDebug>

int t = 0;
int o[8][3][2][18];
double cNumber, hNumber;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    //Remove border
    this->setWindowFlags(Qt::FramelessWindowHint);

    //Add Shadoweffect
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();

    shadow->setBlurRadius(10);
    shadow->setColor(Qt::black);
    shadow->setOffset(0);

    ui->shadowWidget->setGraphicsEffect(shadow);

    //Make the main windows translucent
    this->setAttribute(Qt::WA_TranslucentBackground);



}

Widget::~Widget()
{
    delete ui;
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    QWidget::mouseMoveEvent(event);

    QPoint y = event->globalPos();//mouse position relative to the left up of the computer
    QPoint x = y - this->z;

    this->move(x);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);

    QPoint y = event->globalPos();//mouse position relative to the left up of the computer
    QPoint x = this->geometry().topLeft(); //The widget position relative to the left-up of the computer
    this->z = y - x;
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    QWidget::mouseReleaseEvent(event);
    this->z = QPoint();
}

void Widget::on_btnClose_clicked()
{
    this->close();
}

void Widget::on_btnMin_clicked()
{
    this->showMinimized();
}

void Widget::on_btnMax_clicked()
{
    if(this->isMaximized()) {
        ui->vlMain->setMargin(9);
        this->showNormal();
    } else {
        ui->vlMain->setMargin(0);
        this->showMaximized();
    }
}



void Widget::on_AlkaneBtn_clicked()
{

    cNumber = ui->cNumberSpinBox->value();
    hNumber = ui->hNumberSpinBox->value();
    if((cNumber*2+2) == hNumber && 0<cNumber && cNumber <= 8)
    {
        molarMass = 12.011*cNumber + 1.008*hNumber;
        ui->molarMassDoubleSpinBox->setNum(molarMass);

        double cAtomPer, hAtomPer, cMassPer, hMassPer;
        cAtomPer = cNumber/(cNumber+hNumber);
        hAtomPer = hNumber/(cNumber+hNumber);
        cMassPer = 12.011*cNumber/(12.011*cNumber+1.008*hNumber);
        hMassPer = 1.008*hNumber/(12.011*cNumber+1.008*hNumber);

        ui->cAtomPerDoubleSpinBox->setValue(cAtomPer);
        ui->hAtomPerDoubleSpinBox->setValue(hAtomPer);
        ui->cMassPerDoubleSpinBox->setValue(cMassPer);
        ui->hMassPerDoubleSpinBox->setValue(hMassPer);

        //DongHao
        t = 0;
        Wanting(cNumber,hNumber);
        qDebug()<<"t: "<<t<<endl;

        //MessageBox
        ui->messageBox->setText("Success!");

        //Pop Image
        new_image = new image;
        new_image->show();
    }
    else {
        ui->messageBox->setText("Input wrong, type again");
    }
}

void Widget::on_OlefinBtn_clicked()
{
    cNumber = ui->cNumberSpinBox->value();
    hNumber = ui->hNumberSpinBox->value();
    if(cNumber*2 == hNumber && cNumber >= 2 && cNumber <= 6)
    {
        ui->messageBox->setText("Success!");
        molarMass = 12.011*cNumber + 1.008*hNumber;
        ui->molarMassDoubleSpinBox->setNum(molarMass);

        double cAtomPer, hAtomPer, cMassPer, hMassPer;
        cAtomPer = cNumber/(cNumber+hNumber);
        hAtomPer = hNumber/(cNumber+hNumber);
        cMassPer = 12.011*cNumber/(12.011*cNumber+1.008*hNumber);
        hMassPer = 1.008*hNumber/(12.011*cNumber+1.008*hNumber);

        ui->cAtomPerDoubleSpinBox->setValue(cAtomPer);
        ui->hAtomPerDoubleSpinBox->setValue(hAtomPer);
        ui->cMassPerDoubleSpinBox->setValue(cMassPer);
        ui->hMassPerDoubleSpinBox->setValue(hMassPer);
        //Pop Image
        new_olefin_image = new Olefin_image;
        new_olefin_image->show();
    }
    else {
        ui->messageBox->setText("Input wrong, type again");
    }
}

void Widget::on_CyclaneBtn_clicked()
{
    cNumber = ui->cNumberSpinBox->value();
    hNumber = ui->hNumberSpinBox->value();
    molarMass = 12.011*cNumber + 1.008*hNumber;
    ui->molarMassDoubleSpinBox->setNum(molarMass);

    double cAtomPer, hAtomPer, cMassPer, hMassPer;
    cAtomPer = cNumber/(cNumber+hNumber);
    hAtomPer = hNumber/(cNumber+hNumber);
    cMassPer = 12.011*cNumber/(12.011*cNumber+1.008*hNumber);
    hMassPer = 1.008*hNumber/(12.011*cNumber+1.008*hNumber);


    if(hNumber == 2*cNumber && cNumber <= 6 && cNumber >= 3)
    {
        ui->messageBox->setText("Success!");
        ui->cAtomPerDoubleSpinBox->setValue(cAtomPer);
        ui->hAtomPerDoubleSpinBox->setValue(hAtomPer);
        ui->cMassPerDoubleSpinBox->setValue(cMassPer);
        ui->hMassPerDoubleSpinBox->setValue(hMassPer);
        new_cyclane_image = new CyclaneImage;
        new_cyclane_image->show();
    }
    //MessageBox
    else {
        ui->messageBox->setText("Input wrong, type again");
    }
}

void Widget::on_AreneBtn_clicked()
{
    cNumber = ui->cNumberSpinBox->value();
    hNumber = ui->hNumberSpinBox->value();
    molarMass = 12.011*cNumber + 1.008*hNumber;
    ui->molarMassDoubleSpinBox->setNum(molarMass);

    double cAtomPer, hAtomPer, cMassPer, hMassPer;
    cAtomPer = cNumber/(cNumber+hNumber);
    hAtomPer = hNumber/(cNumber+hNumber);
    cMassPer = 12.011*cNumber/(12.011*cNumber+1.008*hNumber);
    hMassPer = 1.008*hNumber/(12.011*cNumber+1.008*hNumber);

    ui->cAtomPerDoubleSpinBox->setValue(cAtomPer);
    ui->hAtomPerDoubleSpinBox->setValue(hAtomPer);
    ui->cMassPerDoubleSpinBox->setValue(cMassPer);
    ui->hMassPerDoubleSpinBox->setValue(hMassPer);

    if((cNumber*2 - 6) == hNumber && cNumber >= 6 && cNumber <= 9)
    {
        ui->messageBox->setText("Success!");
        new_arene_image = new AreneImage;
        new_arene_image->show();
    }
    //MessageBox
    else {
        ui->messageBox->setText("Input wrong, type again");
    }
}

void Widget::on_pushButton_clicked()
{
    cNumber = ui->cNumberSpinBox->value();
    hNumber = ui->hNumberSpinBox->value();
    molarMass = 12.011*cNumber + 1.008*hNumber;
    ui->molarMassDoubleSpinBox->setNum(molarMass);

    double cAtomPer, hAtomPer, cMassPer, hMassPer;
    cAtomPer = cNumber/(cNumber+hNumber);
    hAtomPer = hNumber/(cNumber+hNumber);
    cMassPer = 12.011*cNumber/(12.011*cNumber+1.008*hNumber);
    hMassPer = 1.008*hNumber/(12.011*cNumber+1.008*hNumber);

    ui->cAtomPerDoubleSpinBox->setValue(cAtomPer);
    ui->hAtomPerDoubleSpinBox->setValue(hAtomPer);
    ui->cMassPerDoubleSpinBox->setValue(cMassPer);
    ui->hMassPerDoubleSpinBox->setValue(hMassPer);

    if((cNumber*2 - 2) == hNumber && cNumber >= 2 && cNumber <= 7)
    {
        ui->messageBox->setText("Success!");
        new_alkyen_image = new alkyen;
        new_alkyen_image->show();
    }
    //MessageBox
    else {
        ui->messageBox->setText("Input wrong, type again");
    }
}

