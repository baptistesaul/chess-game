//
// Created by bapti on 22/10/2024.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QMainWindow>

#include "model/ChessGame.h"


class Controller {
    QMainWindow *window;
    ChessGame *game;

public:
    explicit Controller(QMainWindow *window);

    void launchApp();
};


#endif //CONTROLLER_H
