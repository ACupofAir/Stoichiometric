#define WIDGET_H

#include <QWidget>
#include <QPoint>
#include "image.h"
#include "olefin_image.h"
#include "cyclaneimage.h"
#include "areneimage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

extern int t;
extern int o[8][3][2][18];
extern double cNumber;
extern double hNumber;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    //Add mouse move event
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    Olefin_image *new_olefin_image;
    image *new_image;
    CyclaneImage *new_cyclane_image;
    AreneImage *new_arene_image;

    double molarMass;
//    int t = 0;
//    int o[8][3][2][18];

    void Wanting(double doubletanshu, double doubleqingshu);

private slots:
    void on_btnClose_clicked();

    void on_btnMin_clicked();

    void on_btnMax_clicked();

    void on_AlkaneBtn_clicked();

    void on_OlefinBtn_clicked();

    void on_CyclaneBtn_clicked();

    void on_AreneBtn_clicked();

private:
    Ui::Widget *ui;
    QPoint z;
};
