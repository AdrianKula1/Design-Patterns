//
// Created by Adrian on 12.08.2021.
//

#include "PlayStation.h"

Game *PlayStation::getGame() {
    return new PsGame;
}

Pad *PlayStation::getPad() {
    return new PsPad;
}