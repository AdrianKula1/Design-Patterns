//
// Created by Adrian on 02.09.2021.
//

#ifndef KOMPOZYT_COMPOSITE_H
#define KOMPOZYT_COMPOSITE_H


#include <vector>
#include "Block.h"

class Composite: public Block {
private:
    std::vector<Block*> blocks;
public:
    void move() override;
    void rotate() override;
    void addBlock(Block *block);
};


#endif //KOMPOZYT_COMPOSITE_H
