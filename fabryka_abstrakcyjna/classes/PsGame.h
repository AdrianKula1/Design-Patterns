//
// Created by Adrian on 12.08.2021.
//

#ifndef FABRYKA_ABSTRAKCYJNA_PSGAME_H
#define FABRYKA_ABSTRAKCYJNA_PSGAME_H
#include "Game.h"

class PsGame: public Game{
public:
    void launch() override;
};


#endif //FABRYKA_ABSTRAKCYJNA_PSGAME_H
