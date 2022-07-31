//
// Created by Adrian on 19.07.2021.
//

#ifndef SINGLETON_SETTINGS_H
#define SINGLETON_SETTINGS_H

class Settings{
private:
    static Settings* settings;
    int resolutionX, resolutionY;
    float sensitivity;
    const int FOV = 90;
public:
    Settings();
    void changeSensitivity(float sensitivity);
    void changeResolution(int resolutionX, int resolutionY);
    static Settings* getInstance();
};

#endif //SINGLETON_SETTINGS_H
