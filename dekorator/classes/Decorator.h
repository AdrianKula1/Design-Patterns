//
// Created by Adrian on 08.08.2021.
//

#ifndef DEKORATOR_DECORATOR_H
#define DEKORATOR_DECORATOR_H
#include "ICar.h"

class Decorator: public ICar{
private:
    ICar *car;
public:
    explicit Decorator(ICar *car);
    void drive() override;
};


#endif //DEKORATOR_DECORATOR_H
