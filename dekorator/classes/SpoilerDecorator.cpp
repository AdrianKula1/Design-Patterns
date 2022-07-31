//
// Created by Adrian on 08.08.2021.
//

#include "SpoilerDecorator.h"
#include <string>
SpoilerDecorator::SpoilerDecorator(ICar *car, std::string spoiler): Decorator(car) {
    this->spoiler=spoiler;
}

std::string SpoilerDecorator::getSpoiler() {
    return spoiler;
}