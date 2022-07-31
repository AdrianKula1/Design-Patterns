//
// Created by Adrian on 08.08.2021.
//

#include "PaintDecorator.h"
#include <string>
#include <iostream>
PaintDecorator::PaintDecorator(ICar *car, std::string color): Decorator(car) {
    this->color=color;

}

std::string PaintDecorator::getColor() {
    return color;
}

void PaintDecorator::drive() {
    std::cout<<"this car moves slightly faster because it has " << this->color << " color." << std::endl;
}