#include "loginwindow.h"
#include "register.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    Register r;
    r.show();
    w.show();
    return a.exec();
}
