//
// Created by bapti on 22/10/2024.
//

#ifndef TITEBUTTON_H
#define TITEBUTTON_H

#include <QPushButton>

#include "TileButton.h"
#include "../tools/Component.h"

struct TileColor {
    const std::string main;
    const std::string hover;
};

class TileButton : public Component, public QPushButton {
    const TileColor *color;

public:
    TileButton(View *parentView, QWidget *parentWidget, const TileColor *color);

    void resizeEvent(QResizeEvent *event) override;

    void enterEvent(QEnterEvent *event) override;

    void leaveEvent(QEvent *event) override;

    inline const static TileColor *WHITE = new TileColor{"#f5f5f5", "#f1f1f1"};;
    inline const static TileColor *BLACK = new TileColor{"#434343", "#3f3f3f"};
};


#endif //TITEBUTTON_H
