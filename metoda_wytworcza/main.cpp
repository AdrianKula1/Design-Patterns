#include <iostream>
#include "headers/RocketFactory.h"
#include "headers/BulletFactory.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    RocketFactory RocketFactory1 = RocketFactory();
    BulletFactory BulletFactory2 = BulletFactory();

    Ammo *A1=RocketFactory1.createAmmo();
    Ammo *A2=BulletFactory2.createAmmo();

    A1->dealDamage();
    A2->dealDamage();

    return 0;
}