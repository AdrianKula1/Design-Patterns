//
// Created by Adrian on 08.08.2021.
//

#ifndef DEKORATOR_SPOILERDECORATOR_H
#define DEKORATOR_SPOILERDECORATOR_H

#include <string>
#include "Decorator.h"
#include "ICar.h"

class SpoilerDecorator: public Decorator {
private:
    std::string spoiler;
public:
    SpoilerDecorator(ICar *car, std::string spoiler);
    std::string getSpoiler();
};


#endif //DEKORATOR_SPOILERDECORATOR_H
