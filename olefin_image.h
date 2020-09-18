#ifndef OLEFIN_IMAGE_H
#define OLEFIN_IMAGE_H

#include <QWidget>

namespace Ui {
class Olefin_image;
}

class Olefin_image : public QWidget
{
    Q_OBJECT

public:
    explicit Olefin_image(QWidget *parent = nullptr);
    ~Olefin_image();
    void paintEvent(QPaintEvent *event);

private:
    Ui::Olefin_image *ui;
};

#endif // OLEFIN_IMAGE_H
