//
// Created by Adrian on 27.07.2021.
//

#include "../headers/BulletFactory.h"
#include "../headers/Factory.h"
#include "../headers/Bullet.h"

BulletFactory::BulletFactory(): Factory("BulletFabric1") {}

Ammo * BulletFactory::createAmmo() {
    return new Bullet;
}

Ammo * Factory::createAmmo() {
    return new Bullet;
}