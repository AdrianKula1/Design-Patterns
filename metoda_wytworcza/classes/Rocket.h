//
// Created by Adrian on 27.07.2021.
//

#ifndef METODA_WYTWORCZA_ROCKET_H
#define METODA_WYTWORCZA_ROCKET_H
#include "../headers/Ammo.h"
class Rocket: public Ammo{
private:
    int serialNumber;
public:
    Rocket();
    void dealDamage() override;
    static void explode();
};
#endif //METODA_WYTWORCZA_ROCKET_H
