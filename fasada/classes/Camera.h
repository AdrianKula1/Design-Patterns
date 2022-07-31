//
// Created by Adrian on 15.07.2021.
//

#ifndef FASADA_CAMERA_H
#define FASADA_CAMERA_H
#include "FaceRecognizer.h"
#include "Thermometer.h"
#include "Rangefinder.h"
class Camera{
private:
    FaceRecognizer* faceRecognizer;
    Thermometer* thermometer;
    Rangefinder* rangefinder;
public:
    Camera();
    void checkPerson(int position, float temperature);
};

#endif //FASADA_CAMERA_H
