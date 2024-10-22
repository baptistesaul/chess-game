//
// Created by bapti on 22/10/2024.
//


#include "../include/Controller.h"

#include "../include/view/GameView.h"

Controller::Controller(QMainWindow *window)
    : window(window), game(nullptr) {
}

void Controller::launchApp() {
    this->game = new ChessGame("Baptiste", "Sarah");

    GameView view(this);
    view.show(this->window);
}
