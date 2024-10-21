#include <iostream>
#include <QApplication>
#include <QMainWindow>


int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QMainWindow mainWindow;
    mainWindow.resize(1280, 720);
    mainWindow.setMinimumSize(960, 540);

    mainWindow.show();

    return QApplication::exec();
}
