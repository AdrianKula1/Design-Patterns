//
// Created by Adrian on 02.09.2021.
//

#ifndef KOMPOZYT_GRASSBLOCK_H
#define KOMPOZYT_GRASSBLOCK_H
#include "Block.h"

class GrassBlock: public Block{
private:
    int height=1, width=1, length=1;
    int positionX=0, positionY=0, positionZ=0;
public:
    void move() override;
    void rotate() override;
    void animateGrass();
};


#endif //KOMPOZYT_GRASSBLOCK_H
