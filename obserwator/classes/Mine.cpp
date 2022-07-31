//
// Created by Adrian on 17.07.2021.
//

#include "../headers/Mine.h"
#include <iostream>
void Mine::action() {
    explode();
}

Mine::Mine(int positionX, int positionY) {
    this->positionX=positionX;
    this->positionY=positionY;
}

void Mine::explode(){
    std::cout << "Mina wybuchla! " << std::endl;
}

bool Mine::comparePosition(int positionX, int positionY) {
    if(this->positionX==positionX && this->positionY==positionY){
        action();
        return true;
    }
    return false;
}