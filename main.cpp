#include "mainwindow.h"
#include "runguard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    RunGuard guard("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");
    if(!guard.tryToRun())
        return 0;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}