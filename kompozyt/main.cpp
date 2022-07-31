#include <iostream>

#include "classes/Composite.h"
#include "classes/GrassBlock.h"
int main() {
    Composite C;
    GrassBlock *GB1 = new GrassBlock;
    GB1->animateGrass();
    GrassBlock *GB2 = new GrassBlock;
    GrassBlock *GB3 = new GrassBlock;
    GrassBlock *GB4 = new GrassBlock;
    C.addBlock(GB1);
    C.addBlock(GB2);
    C.addBlock(GB3);
    C.addBlock(GB4);
    C.move();

    return 0;
}
