//
// Created by Snowty on 20/10/2024.
//

#include "../../include/model/ChessGame.h"

ChessGame::ChessGame(const std::string &player1, const std::string &player2) {
    this->players = new ChessPlayer[2]();
    this->players[0] = new ChessPlayer(player1);
    this->players[1] = new ChessPlayer(player2);
    this->board = new ChessBoard();
}

ChessGame::~ChessGame() {
    delete this->players;
    delete this->board;
}

