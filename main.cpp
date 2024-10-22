#include <iostream>
#include <QApplication>
#include <QGuiApplication>
#include <QScreen>

#include "include/Controller.h"
#include "include/Controller.h"
#include "include/model/ChessGame.h"

void centerWindow(QMainWindow *window);

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    mainWindow.setMinimumSize(960, 540);
    mainWindow.resize(1280, 720);
    mainWindow.setWindowTitle("Chess Game");
    centerWindow(&mainWindow);

    auto controller = Controller(&mainWindow);

    controller.launchApp();

    return QApplication::exec();
}

void centerWindow(QMainWindow *window) {
    const QScreen *screen = QGuiApplication::primaryScreen();
    const QSize screenSize = screen->availableSize();
    const int x = (screenSize.width() - window->width()) / 2;
    const int y = (screenSize.height() - window->height()) / 2;

    window->move(x, y);
}
