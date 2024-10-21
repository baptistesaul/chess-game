//
// Created by Snowty on 20/10/2024.
//

#include <utility>

#include "../../include/model/ChessPlayer.h"

ChessPlayer::ChessPlayer(std::string name)
    : name(std::move(name)), eatenPieces(new std::vector<ChessPlayer *>) {
}

std::string ChessPlayer::getName() const {
    return this->name;
}

void ChessPlayer::setName(std::string name) {
    this->name = std::move(name);
}
