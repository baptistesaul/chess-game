#include <iostream>
#include <QApplication>
#include <QMainWindow>

#include "include/model/ChessGame.h"
#include "include/model/ChessPlayer.h"


int main(int argc, char *argv[]) {
    ChessGame game = ChessGame("Baptiste", "Sarah");

    const ChessPlayer *player1 = game.getFirstPlayer();
    const ChessPlayer *player2 = game.getFirstPlayer();

    std::cout << player1->getName() << std::endl;
    std::cout << player2->getName() << std::endl;

    return 0;
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    mainWindow.resize(1280, 720);
    mainWindow.setMinimumSize(960, 540);

    mainWindow.show();

    return QApplication::exec();
}
