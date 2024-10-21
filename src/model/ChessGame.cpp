//
// Created by Snowty on 20/10/2024.
//

#include "../../include/model/ChessGame.h"

ChessGame::ChessGame(const std::string &player1, const std::string &player2)
    : players{ChessPlayer(player1), ChessPlayer(player2)}, board(ChessBoard()) {
}

ChessPlayer *ChessGame::getFirstPlayer() {
    return &this->players[0];
}


ChessPlayer *ChessGame::getSecondPlayer() {
    return &this->players[1];
}

ChessBoard *ChessGame::getBoard() {
    return &this->board;
}
