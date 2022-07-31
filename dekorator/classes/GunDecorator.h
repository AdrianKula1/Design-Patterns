//
// Created by Adrian on 08.08.2021.
//

#ifndef DEKORATOR_GUNDECORATOR_H
#define DEKORATOR_GUNDECORATOR_H

#include <string>
#include "Decorator.h"
#include "ICar.h"

class GunDecorator: public Decorator {
private:
    std::string gun;
public:
    GunDecorator(ICar *car, std::string gun);
    void shoot();
    std::string getGun();

};


#endif //DEKORATOR_GUNDECORATOR_H
