#ifndef IMAGE_H
#define IMAGE_H

#include <QWidget>

namespace Ui {
class image;
}

class image : public QWidget
{
    Q_OBJECT

public:
    explicit image(QWidget *parent = nullptr);
    ~image();

    void paintEvent(QPaintEvent *event);

private:
    Ui::image *ui;
};

#endif // IMAGE_H
