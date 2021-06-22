#include "Search_Engine_GUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Search_Engine_GUI w;
    w.setWindowTitle("SEngine Local Paper");
    w.setWindowIcon(QIcon("icon.png"));
    w.show();
    return a.exec();
}
