//
// Created by Adrian on 27.07.2021.
//

#ifndef METODA_WYTWORCZA_RIFLEFABRIC_H
#define METODA_WYTWORCZA_RIFLEFABRIC_H
#include "../headers/Factory.h"

class BulletFactory: public Factory{
public:
    BulletFactory();
    Ammo * createAmmo() override;
};
#endif //METODA_WYTWORCZA_RIFLEFABRIC_H
