//
// Created by bapti on 22/10/2024.
//

#include "../../../include/view/component/TileButton.h"

#include <iostream>
#include <utility>

TileButton::

TileButton::TileButton(View *parentView, QWidget *parentWidget, const TileColor *color)
    : Component(parentView), QPushButton(parentWidget), color(color) {
    QPalette palette = this->palette();
    palette.setColor(QPalette::Active, QPalette::Button, Qt::blue);
    this->setAutoFillBackground(true);
    this->setPalette(palette);
    this->update();
}

void TileButton::resizeEvent(QResizeEvent *event) {
    this->setMinimumHeight(this->parentWidget()->width() / 8);
}

void TileButton::enterEvent(QEnterEvent *event) {
    QPalette palette = this->palette();
    palette.setColor(QPalette::Button, Qt::darkBlue);
    this->setPalette(palette);
    this->update();
    QPushButton::enterEvent(event);
    std::cout << "enter tile" << std::endl;
}


void TileButton::leaveEvent(QEvent *event) {
    QPalette palette = this->palette();
    palette.setColor(QPalette::Button, Qt::blue);
    this->setPalette(palette);
    this->update();
    QPushButton::leaveEvent(event);
    std::cout << "leave tile" << std::endl;
}