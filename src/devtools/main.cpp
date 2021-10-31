#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	MainWindow w;
	w.setWindowTitle("DevTools!");
	w.show();

    //QLabel* label = new QLabel(&w);
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//QLabel* label = new QLabel();
	//label->setAttribute(Qt::WA_DeleteOnClose);
	//label->setText("Hello World");
	//label->show();
    
    return a.exec();
}