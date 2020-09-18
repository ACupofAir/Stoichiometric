#ifndef ARENEIMAGE_H
#define ARENEIMAGE_H

#include <QWidget>

namespace Ui {
class AreneImage;
}

class AreneImage : public QWidget
{
    Q_OBJECT

public:
    explicit AreneImage(QWidget *parent = nullptr);
    ~AreneImage();
    void paintEvent(QPaintEvent *event);

private:
    Ui::AreneImage *ui;
};

#endif // ARENEIMAGE_H
