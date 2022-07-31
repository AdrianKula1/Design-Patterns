//
// Created by Adrian on 27.07.2021.
//

#ifndef METODA_WYTWORCZA_ROCKETFABRIC_H
#define METODA_WYTWORCZA_ROCKETFABRIC_H
#include "../headers/Factory.h"
class RocketFactory: public Factory{
public:
    RocketFactory();
    Ammo * createAmmo() override;
};
#endif //METODA_WYTWORCZA_ROCKETFABRIC_H
