//
// Created by bapti on 22/10/2024.
//

#ifndef VIEW_H
#define VIEW_H
#include "../../Controller.h"


class View {
protected:
    Controller *controller;

public:
    explicit View(Controller *controller);

    virtual ~View() = default;

    virtual void render(QWidget *parent) = 0;

    void show(QMainWindow *window);
};


#endif //VIEW_H
