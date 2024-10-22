//
// Created by bapti on 22/10/2024.
//

#ifndef COMPONENTVIEW_H
#define COMPONENTVIEW_H
#include "View.h"


class Component {
protected:
    View *parentView;

public:
    Component(View *parentView);
};


#endif //COMPONENTVIEW_H
