#ifndef RAI_H
#define RAI_H

#include <QMainWindow>

namespace Ui {
class RAI;
}

class RAI : public QMainWindow
{
    Q_OBJECT

public:
    explicit RAI(QWidget *parent = 0);
    ~RAI();

private:
    Ui::RAI *ui;
};

#endif // RAI_H
