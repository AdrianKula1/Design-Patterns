//
// Created by Adrian on 27.07.2021.
//

#ifndef METODA_WYTWORCZA_FABRIC_H
#define METODA_WYTWORCZA_FABRIC_H
#include <string>
#include "../headers/Ammo.h"
class Factory{
private:
    std::string name;
public:
    Factory(std::string name);
    virtual Ammo* createAmmo()=0;
};
#endif //METODA_WYTWORCZA_FABRIC_H
