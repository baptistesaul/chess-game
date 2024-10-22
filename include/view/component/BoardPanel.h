//
// Created by bapti on 22/10/2024.
//

#ifndef BOARDVIEW_H
#define BOARDVIEW_H
#include "TileButton.h"
#include "../GameView.h"
#include "../tools/Component.h"
#include "../tools/MainPanel.h"


class BoardPanel : public Component, public QWidget {
protected:
    TileButton *tiles[64] = {nullptr};

public:
    BoardPanel(GameView *parentView, QWidget *parentWidget);

    void resizeEvent(QResizeEvent *event) override;
};


#endif //BOARDVIEW_H
