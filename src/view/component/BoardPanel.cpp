//
// Created by bapti on 22/10/2024.
//

#include <QStyle>
#include "../../../include/view/component/BoardPanel.h"

#include <qgridlayout.h>

#include "../../../include/view/component/TileButton.h"

BoardPanel::BoardPanel(GameView *parentView, QWidget *parentWidget)
    : Component(parentView), QWidget(parentWidget) {
    this->setStyleSheet("background-color: #f5f5f5;");


    auto *layout = new QGridLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    for (int i = 0; i < 64; ++i) {
        const int x = i % 8;
        const int y = i / 8;
        const TileColor* color = (x + y) % 2 == 0 ? TileButton::WHITE : TileButton::BLACK;
        this->tiles[i] = new TileButton(this->parentView, this, color);
        layout->addWidget(this->tiles[i], y, x);
    }

    this->setLayout(layout);
}

void BoardPanel::resizeEvent(QResizeEvent *event) {
    this->setMinimumWidth(this->height());
}
