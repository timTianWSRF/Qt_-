#include "second.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    second w;
    w.show();
    return a.exec();
}
