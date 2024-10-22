//
// Created by Snowty on 20/10/2024.
//

#ifndef CHESSPLAYER_H
#define CHESSPLAYER_H
#include <string>
#include <vector>

#include "ChessPiece.h"


class ChessPlayer {
    std::string name;
    std::vector<ChessPiece *> eatenPieces;

public:
    explicit ChessPlayer(std::string name);

    [[nodiscard]]
    std::string getName() const;

    void setName(std::string name);

    void eatPiece(ChessPiece *piece);

};


#endif //CHESSPLAYER_H
