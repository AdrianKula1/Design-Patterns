//
// Created by Adrian on 26.08.2021.
//

#include "RaceCar.h"
#include <iostream>

RaceCar::RaceCar(std::string engine, float maxSpeed) {
    this->engine=engine;
    this->maxSpeed=maxSpeed;
}

Car * RaceCar::Clone() {
    return new RaceCar(this->engine, this->maxSpeed);
}

void RaceCar::Drive() {
    std::cout<<"vroom vroom"<<std::endl;
}

void RaceCar::setEngine(std::string engine) {
    this->engine=engine;
}
void RaceCar::slideSpoiler() {
    std::cout<<"spoiler slided"<<std::endl;
}

void RaceCar::setMaxSpeed(int maxSpeed) {
    this->maxSpeed=maxSpeed;
}


