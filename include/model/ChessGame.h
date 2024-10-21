//
// Created by Snowty on 20/10/2024.
//

#ifndef CHESSGAME_H
#define CHESSGAME_H

#include "ChessBoard.h"
#include "ChessPlayer.h"

class ChessGame {
    ChessPlayer players[2];
    const ChessBoard board;

public:
    ChessGame(const std::string &player1, const std::string &player2);

    ~ChessGame() = default;

    [[nodiscard]]
    const ChessPlayer *getFirstPlayer();

    [[nodiscard]]
    ChessPlayer *getSecondPlayer();
};


#endif //CHESSGAME_H
