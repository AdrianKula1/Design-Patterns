#include <iostream>
#include "headers/Settings.h"
#include "headers/Game1.h"
int main() {

    std::cout << "Hello, World!" << std::endl;
    Settings* settings = Settings::getInstance();
    Game1* game1 = new Game1(settings, "Valorant");
    Game1* game2 = new Game1(settings, "Apex");
    game1->changeResolution(2137, 6969);
    game2->changeResolution(21, 37);
    return 0;
}



