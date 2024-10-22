//
// Created by bapti on 22/10/2024.
//

#include "../../../include/view/tools/View.h"

#include <iostream>

View::View(Controller *controller)
    : controller(controller) {
}

void View::show(QMainWindow *window) {
    // free heap memory for previous widget
    delete window->centralWidget();

    auto *parent = new QWidget(window);
    parent->setMinimumSize(window->minimumSize());
    parent->setBaseSize(window->size());
    window->setCentralWidget(parent);

    this->render(parent);

    window->show();
}
