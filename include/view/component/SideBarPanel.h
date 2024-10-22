//
// Created by bapti on 22/10/2024.
//

#ifndef SIDEBARVIEW_H
#define SIDEBARVIEW_H
#include "../tools/Component.h"


class SideBarPanel : public Component, public QWidget {
public:
    SideBarPanel(View *parentView, QWidget *parentWidget);
};


#endif //SIDEBARVIEW_H
