//
// Created by Adrian on 27.07.2021.
//

#include "../headers/RocketFactory.h"
#include "../headers/Factory.h"
#include "../headers/Rocket.h"

RocketFactory::RocketFactory(): Factory("RocketFabric1") {}

Ammo * RocketFactory::createAmmo(){
    return new Rocket;
}