//
// Created by Snowty on 20/10/2024.
//

#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <vector>

#include "ChessPiece.h"


class ChessBoard {
    std::vector<ChessPiece *> pieces;

public:
    explicit ChessBoard();

    ~ChessBoard() = default;


};


#endif //CHESSBOARD_H
