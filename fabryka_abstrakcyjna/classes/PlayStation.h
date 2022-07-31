//
// Created by Adrian on 12.08.2021.
//

#ifndef FABRYKA_ABSTRAKCYJNA_PLAYSTATION_H
#define FABRYKA_ABSTRAKCYJNA_PLAYSTATION_H
#include "PsGame.h"
#include "PsPad.h"
#include "Console.h"
class PlayStation: public Console {
public:
    Game * getGame() override;
    Pad * getPad() override;
};


#endif //FABRYKA_ABSTRAKCYJNA_PLAYSTATION_H
