//
// Created by Adrian on 12.08.2021.
//

#ifndef FABRYKA_ABSTRAKCYJNA_CONSOLE_H
#define FABRYKA_ABSTRAKCYJNA_CONSOLE_H
#include "Pad.h"
#include "Game.h"

class Console {
public:
    virtual Pad* getPad();
    virtual Game *getGame();
};


#endif //FABRYKA_ABSTRAKCYJNA_CONSOLE_H
