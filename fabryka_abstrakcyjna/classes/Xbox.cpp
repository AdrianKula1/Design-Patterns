//
// Created by Adrian on 12.08.2021.
//

#include "Xbox.h"

Game *Xbox::getGame() {
    return new XboxGame;
}

Pad *Xbox::getPad() {
    return new XboxPad;
}