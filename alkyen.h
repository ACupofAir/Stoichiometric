#ifndef ALKYEN_H
#define ALKYEN_H

#include <QWidget>

namespace Ui {
class alkyen;
}

class alkyen : public QWidget
{
    Q_OBJECT

public:
    explicit alkyen(QWidget *parent = nullptr);
    ~alkyen();
    void paintEvent(QPaintEvent *event);

private:
    Ui::alkyen *ui;
};

#endif // ALKYEN_H
