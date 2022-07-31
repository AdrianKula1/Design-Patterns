//
// Created by Adrian on 12.08.2021.
//

#ifndef FABRYKA_ABSTRAKCYJNA_XBOXGAME_H
#define FABRYKA_ABSTRAKCYJNA_XBOXGAME_H
#include "Game.h"

class XboxGame: public Game {
public:
    void launch() override;
};


#endif //FABRYKA_ABSTRAKCYJNA_XBOXGAME_H
