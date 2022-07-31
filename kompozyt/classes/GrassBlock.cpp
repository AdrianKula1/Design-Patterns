//
// Created by Adrian on 02.09.2021.
//

#include <iostream>
#include "GrassBlock.h"

void GrassBlock::move() {
    this->positionX+=1;
    this->positionY+=1;
    this->positionZ+=1;
    std::cout << "Block moved" << std::endl;
}

void GrassBlock::rotate() {
    std::cout << "Block rotated" << std::endl;
}

void GrassBlock::animateGrass() {
    std::cout << "Grass is being animated" << std::endl;
}
