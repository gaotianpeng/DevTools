#include "mainwindow.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cout << "hello ffmpeg!!!!" << endl;
    MainWindow w;
	w.setWindowTitle("DevTools!");
    w.resize(800, 600);
    w.show();
    return a.exec();
}