#include "rai.h"
#include "ui_rai.h"

RAI::RAI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RAI)
{
    ui->setupUi(this);
}

RAI::~RAI()
{
    delete ui;
}
