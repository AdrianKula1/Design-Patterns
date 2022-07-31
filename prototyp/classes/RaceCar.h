//
// Created by Adrian on 26.08.2021.
//

#ifndef PROTOTYP_RACECAR_H
#define PROTOTYP_RACECAR_H
#include "Car.h"
#include <string>

class RaceCar: public Car{
private:
    std::string engine;
    float maxSpeed;
public:
    RaceCar(std::string engine, float maxSpeed);
    Car * Clone() override;
    void Drive() override;
    void setEngine(std::string engine) override;
    void slideSpoiler();
    void setMaxSpeed(int maxSpeed);

};


#endif //PROTOTYP_RACECAR_H
