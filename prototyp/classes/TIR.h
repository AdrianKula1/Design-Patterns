//
// Created by Adrian on 26.08.2021.
//

#ifndef PROTOTYP_TIR_H
#define PROTOTYP_TIR_H
#include "Car.h"
#include <string>

class TIR: public Car{
private:
    std::string engine;
    float weight;
public:
    TIR(std::string engine, float weight);
    Car * Clone() override;
    void Drive() override;
    void setEngine(std::string engine) override;
    void attachSemiTrailer();
    void setWeight(float weight);

};


#endif //PROTOTYP_TIR_H
