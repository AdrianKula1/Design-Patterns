//
// Created by Adrian on 12.08.2021.
//

#ifndef FABRYKA_ABSTRAKCYJNA_XBOX_H
#define FABRYKA_ABSTRAKCYJNA_XBOX_H

#include "Console.h"
#include "XboxGame.h"
#include "XboxPad.h"

class Xbox: public Console {
public:
    Game * getGame() override;
    Pad * getPad() override;
};


#endif //FABRYKA_ABSTRAKCYJNA_XBOX_H
