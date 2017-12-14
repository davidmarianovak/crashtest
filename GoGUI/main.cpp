#include "GoGUI.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GoGUI w;
    w.show();
    return a.exec();
}
