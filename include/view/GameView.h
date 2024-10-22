//
// Created by bapti on 22/10/2024.
//

#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include "tools/View.h"


class GameView : public View {
public:
    explicit GameView(Controller *controller) : View(controller) {
    }

    void render(QWidget *content) override;
};


#endif //GAMEVIEW_H
