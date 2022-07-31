//
// Created by Adrian on 26.08.2021.
//

#include "TIR.h"
#include <iostream>

TIR::TIR(std::string engine, float weight) {
    this->engine=engine;
    this->weight=weight;
}

Car * TIR::Clone() {
    return new TIR(this->engine, this->weight);
}

void TIR::Drive() {
    std::cout<<"vroom vroom"<<std::endl;
}

void TIR::setEngine(std::string engine) {
    this->engine=engine;
}
void TIR::attachSemiTrailer() {
    std::cout<<"spoiler slided"<<std::endl;
}

void TIR::setWeight(float weight){
    this->weight=weight;
}