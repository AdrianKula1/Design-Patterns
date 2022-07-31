//
// Created by Adrian on 08.08.2021.
//

#ifndef DEKORATOR_PAINTDECORATOR_H
#define DEKORATOR_PAINTDECORATOR_H
#include <string>
#include "Decorator.h"
#include "ICar.h"

class PaintDecorator: public Decorator{
private:
    std::string color;
public:
    PaintDecorator(ICar *car, std::string color);
    void drive() override;
    std::string getColor();
};


#endif //DEKORATOR_PAINTDECORATOR_H
