//
// Created by Snowty on 20/10/2024.
//

#include "../../include/model/ChessBoard.h"

ChessBoard::ChessBoard() : tables{} {
    for (auto &table: this->tables) {
        table = nullptr;
    }
};
