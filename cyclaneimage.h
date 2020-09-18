#ifndef CYCLANEIMAGE_H
#define CYCLANEIMAGE_H

#include <QWidget>

namespace Ui {
class CyclaneImage;
}

class CyclaneImage : public QWidget
{
    Q_OBJECT

public:
    explicit CyclaneImage(QWidget *parent = nullptr);
    ~CyclaneImage();
    void paintEvent(QPaintEvent *event);

private:
    Ui::CyclaneImage *ui;
};

#endif // CYCLANEIMAGE_H
