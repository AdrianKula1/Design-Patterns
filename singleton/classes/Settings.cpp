//
// Created by Adrian on 19.07.2021.
//

#include "../headers/Settings.h"
#include <iostream>

Settings::Settings(){};

Settings* Settings::settings = new Settings();

Settings* Settings::getInstance(){
    return settings;
}


void Settings::changeResolution(int resX, int resY){
    this->resolutionX=resX;
    this->resolutionY=resY;
    std::cout << "resolution changed! " << resX << " x " << resY << std::endl;
}

void Settings::changeSensitivity(float sens){
    this->sensitivity=sens;
    std::cout << "sensitivity changed! " << sens << std::endl;
}