//
// Created by Adrian on 08.08.2021.
//

#include "GunDecorator.h"
#include <string>
#include <iostream>
GunDecorator::GunDecorator(ICar *car, std::string gun): Decorator(car) {
    this->gun=gun;
}

std::string GunDecorator::getGun() {
    return gun;
}

void GunDecorator::shoot() {
    std::cout << "The mounted gun is shooting!" << std::endl;
}
