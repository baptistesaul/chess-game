//
// Created by Snowty on 20/10/2024.
//

#ifndef PIECE_H
#define PIECE_H
#include <string>

enum ChessPieceType {
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING,
};

class ChessPiece {
    int x;
    int y;

public:
    ChessPiece(const int &x, const int &y);
};


#endif //PIECE_H
