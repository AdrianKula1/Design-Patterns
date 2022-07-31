//
// Created by Adrian on 19.07.2021.
//

#include "../headers/Game1.h"
#include <iostream>
Game1::Game1(Settings *settings, std::string name) {
    std::cout << name << " game created" << std::endl;
    this->settings=settings;
    this->name=name;
}

void Game1::changeSensitivity(int sensitivity) {
    settings->changeSensitivity(sensitivity);
}

void Game1::changeResolution(int resolutionX, int resolutionY) {
    settings->changeResolution(resolutionX, resolutionY);

}