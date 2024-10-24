//
// Created by Snowty on 20/10/2024.
//

#include <utility>

#include "../../include/model/ChessPlayer.h"

ChessPlayer::ChessPlayer(std::string name)
    : name(std::move(name)), eatenPieces(std::vector<ChessPiece *>()) {
}

std::string ChessPlayer::getName() const {
    return this->name;
}

void ChessPlayer::setName(std::string name) {
    this->name = std::move(name);
}

void ChessPlayer::eatPiece(ChessPiece *piece) {
    this->eatenPieces.push_back(piece);
}
