//
// Created by Adrian on 02.09.2021.
//

#include "Composite.h"

void Composite::move() {
    for (int i=0; i<blocks.size(); i++) {
        blocks[i]->move();
    }
}

void Composite::rotate() {
    for (int i=0; i<blocks.size(); i++) {
        blocks[i]->rotate();
    }

//    for (auto & block : blocks) {
//        block->rotate();
//    }
}

void Composite::addBlock(Block *block) {
    this->blocks.push_back(block);
}
