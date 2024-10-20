//
// Created by Snowty on 20/10/2024.
//

#ifndef CHESSPLAYER_H
#define CHESSPLAYER_H
#include <string>
#include <vector>

#include "ChessPiece.h"


class ChessPlayer {
    std::string *name;
    std::vector<ChessPlayer> *eatenPieces;

public:
    ChessPlayer(std::string name);
};


#endif //CHESSPLAYER_H
