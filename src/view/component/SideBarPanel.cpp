//
// Created by bapti on 22/10/2024.
//

#include "../../../include/view/component/SideBarPanel.h"

SideBarPanel::SideBarPanel(View *parentView, QWidget *parentWidget)
    : Component(parentView), QWidget(parentWidget) {
    this->setStyleSheet("background-color: #e1e1e1;");
}
