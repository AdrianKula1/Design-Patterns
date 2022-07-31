//
// Created by Adrian on 17.07.2021.
//

#ifndef OBSERWATOR_MINE_H
#define OBSERWATOR_MINE_H
#include "Item.h"
class Mine : public Item{
private:
    int positionX, positionY;
public:
    Mine(int positionX, int positionY);
    void action() override;
    void explode();
    bool comparePosition(int positionX, int positionY);

};
#endif //OBSERWATOR_MINE_H
