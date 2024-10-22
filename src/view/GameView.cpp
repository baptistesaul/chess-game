//
// Created by bapti on 22/10/2024.
//

#include <QHBoxLayout>
#include "../../include/view/GameView.h"

#include <iostream>

#include "../../include/view/component/BoardPanel.h"
#include "../../include/view/component/SideBarPanel.h"

void GameView::render(QWidget *parent) {
    auto *leftBar = new SideBarPanel(this, parent);

    auto *board = new BoardPanel(this, parent);

    auto *rightBar = new SideBarPanel(this, parent);

    auto *layout = new QHBoxLayout(parent);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    layout->addWidget(leftBar);
    layout->addWidget(board);
    layout->addWidget(rightBar);
    parent->setLayout(layout);
}
