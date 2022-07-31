//
// Created by Adrian on 15.07.2021.
//

#include "../headers/Person.h"

Person::Person() {
    this->camera=new Camera();
    this->position=0;
    this->tempearture=37;
}

void Person::moveForward(){
    for(int i=0; i<100; i++){
        this->position++;
        if(position==50){
            break;
        }
    }
    camera->checkPerson(position, tempearture);
}