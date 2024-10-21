//
// Created by Snowty on 20/10/2024.
//

#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include "ChessPiece.h"


class ChessBoard {
    ChessPiece *tables[64];

public:
    explicit ChessBoard();

    ~ChessBoard() = default;
};


#endif //CHESSBOARD_H
