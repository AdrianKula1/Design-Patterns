//
// Created by Adrian on 08.08.2021.
//

#ifndef DEKORATOR_CAR_H
#define DEKORATOR_CAR_H
#include "ICar.h"

class Car: public ICar {
public:
    void drive() override;
};


#endif //DEKORATOR_CAR_H
