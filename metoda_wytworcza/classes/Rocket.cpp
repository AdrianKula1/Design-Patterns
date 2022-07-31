//
// Created by Adrian on 27.07.2021.
//
#include <iostream>
#include "../headers/Rocket.h"

Rocket::Rocket(){
    serialNumber=2137;
}

void Rocket::dealDamage(){
   std::cout << "Rocket deals 10 damage!" << std::endl;
   Rocket::explode();
}

void Rocket::explode() {
    std::cout << "Rocked explodes!" << std::endl;
}