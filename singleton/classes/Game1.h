//
// Created by Adrian on 19.07.2021.
//

#ifndef SINGLETON_GAME1_H
#define SINGLETON_GAME1_H
#include <string>
#include "Settings.h"

class Game1{
private:
    Settings* settings;
    std::string name;
public:
    Game1(Settings* settings, std::string name);
    void changeSensitivity(int sensitivity);
    void changeResolution(int resolutionX, int resolutionY);
};

#endif //SINGLETON_GAME1_H
