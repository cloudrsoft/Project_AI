/* Project AI (C) 2016. CloudR Soft Group Inc. */

#include "control.h"
#include "ui_control.h"

Control::Control(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
}

Control::~Control()
{
    delete ui;
}
