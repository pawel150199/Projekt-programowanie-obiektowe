#include "opcje.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    opcje w;
    w.show();
    return a.exec();
}
