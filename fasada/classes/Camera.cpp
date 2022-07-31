//
// Created by Adrian on 15.07.2021.
//

#include "../headers/Camera.h"
#include <iostream>
Camera::Camera() {
    this->faceRecognizer = new FaceRecognizer();
    this->thermometer = new Thermometer();
    this->rangefinder = new Rangefinder();
}

void Camera::checkPerson(int position, float temperature){
    rangefinder->playCommunicate(position);
    if(thermometer->measureTemperature(temperature) && faceRecognizer->checkEyes() && faceRecognizer->checkSkin() && faceRecognizer->hasMask()){
        std::cout<<"mozesz isc" <<std::endl;
    }else{
        std::cout<<"nie mozesz przejsc" << std::endl;
    }
}