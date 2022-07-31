//
// Created by Adrian on 27.07.2021.
//

#ifndef METODA_WYTWORCZA_BULLET_H
#define METODA_WYTWORCZA_BULLET_H
#include "../headers/Ammo.h"

class Bullet: public Ammo{
private:
    int serialNumber;
public:
    Bullet();
    void dealDamage() override;
};


#endif //METODA_WYTWORCZA_BULLET_H
