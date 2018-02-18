#include "mainwindow.h"
#include <QApplication>
#include "core/workspace.h"
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Workspace Work1;

    cout<< "Work <<" <<Work1.getNum()<<">> initialised"<<endl;

    Work1.set_file_list();
    return a.exec();
}
