//
// Created by Adrian on 26.08.2021.
//

#ifndef PROTOTYP_CAR_H
#define PROTOTYP_CAR_H
#include <string>

class Car {
public:
    virtual Car* Clone() = 0;
    virtual void Drive() = 0;
    virtual void setEngine(std::string engine) = 0;
};


#endif //PROTOTYP_CAR_H
