//
// Created by Adrian on 15.07.2021.
//

#ifndef FASADA_PERSON_H
#define FASADA_PERSON_H

#include "Camera.h"

class Person{
private:
    Camera *camera;
    int position;
    float tempearture;
public:
    Person();

    void moveForward();
};

#endif //FASADA_PERSON_H
