#include "Search_Engine_GUI.h"
#include <QtWidgets/QApplication>

wstring discards[1942];
int nStopwords = 1942;
int convert[1 << 16];
wstring tokens = L"`~!@#$%^&*()–-_=+[]{}\\|;:'\",<.>/?“”•";
const float eps = 0.005;

SLL curList;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Search_Engine_GUI w;
    w.setWindowTitle("SEngine Local Paper");
    w.setWindowIcon(QIcon("icon.png"));
    w.show();
    InitList(curList);
    loadFileMeta(curList);
    prepare();
    w.DestroyWaiting();
    int ret = a.exec();
    eraseList(curList);
    return ret;
}
