//
// Created by Adrian on 08.08.2021.
//

#include "Decorator.h"
#include <iostream>

Decorator::Decorator(ICar *car) {
    this->car=car;
}

void Decorator::drive() {
    std::cout << "vroom vroom" << std::endl;
}
