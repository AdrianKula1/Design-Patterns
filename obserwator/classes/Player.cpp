//
// Created by Adrian on 17.07.2021.
//

#include "../headers/Player.h"
#include <iostream>


Player::Player() {
    positionX=0;
    positionY=0;
    isAlive=true;
    Player::addObserver();
}

void Player::move() {
    std::cout << "Plansza to kwadrat 10x10. W dwoch miejscach są miny. Dojdz do pozycji 10, 10" << std::endl;
    std::cout << "1 = krok w gore , 2 = krok w dol, 3 = krok w lewo, 4 = krok w prawo." << std::endl;
    int input=0;
    while(isAlive){
        std::cout << "jestes na pozycji X=" << positionX << " Y=" <<positionY << std::endl;
        std::cout << "Wpisz liczbe z zakresy 1-4 zeby sie ruszyc: ";
        std::cin >> input;
        switch(input){
            case 1:
                positionX++;
                break;
            case 2:
                positionX--;
                break;
            case 3:
                positionY++;
                break;
            case 4:
                positionY--;
                break;
            default:
                std::cout << "Wybierz liczbe z zakresu 1-4! " << std::endl;
        }
        isAlive = !updateObservers();
        if(!isAlive){
            std::cout << "Przegrales " << std::endl;
            break;
        }
        if(positionX==10 && positionY==10 && isAlive){
            std::cout << "Wygrales " << std::endl;
            break;
        }
    }
}

void Player::addObserver() {
    observersList.push_back(new Mine(10, 0));
    observersList.push_back(new Mine(0, 10));
}

void Player::deleteObserver() {
    observersList.pop_back();
}

bool Player::updateObservers() {
    bool stepOnMine = false;
    for(int i=0; i<observersList.size(); i++){
        stepOnMine = observersList[i]->comparePosition(this->positionX, this->positionY);
        if(stepOnMine){
            return true;
        }
    }
    return false;
}