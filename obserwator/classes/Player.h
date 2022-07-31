//
// Created by Adrian on 17.07.2021.
//

#ifndef OBSERWATOR_PLAYER_H
#define OBSERWATOR_PLAYER_H
#include "Character.h"
#include "Item.h"
#include "Mine.h"

#include <vector>

class Player : public Character{
private:
    std::vector<Mine*> observersList;
    int positionX, positionY;
    bool isAlive;

public:
    Player();

    void move();
    void addObserver() override;
    void deleteObserver() override;
    bool updateObservers() override;
};

#endif //OBSERWATOR_PLAYER_H
