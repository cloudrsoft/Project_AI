/* Project AI (C) 2016. CloudR Soft Group Inc. */

#include "control.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Control w;
    w.show();

    return a.exec();
}
