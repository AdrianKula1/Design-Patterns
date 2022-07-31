//
// Created by Adrian on 27.07.2021.
//
#include <iostream>
#include "../headers/Bullet.h"

Bullet::Bullet(){
    serialNumber=2137;
}

void Bullet::dealDamage(){
    std::cout << "bullet deals 3 damage!" << std::endl;
}