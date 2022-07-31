#include <iostream>
#include "classes/ICar.h"
#include "classes/Car.h"
#include "classes/Decorator.h"
#include "classes/PaintDecorator.h"
#include "classes/SpoilerDecorator.h"
#include "classes/GunDecorator.h"

int main() {
    Car *BasicCar=new Car;
    BasicCar->drive();

    std::cout << std::endl << std::endl;

    PaintDecorator *PaintedCar = new PaintDecorator(BasicCar, "red");
    std::cout << PaintedCar->getColor() << std:: endl;    PaintedCar->drive();

    std::cout << std::endl << std::endl;


    GunDecorator *CarWithGun = new GunDecorator(BasicCar, "M4A1");
    std::cout << CarWithGun->getGun() << std:: endl;    CarWithGun->drive();
    CarWithGun->shoot();

    std::cout << std::endl << std::endl;


    SpoilerDecorator *CarWithSpoiler = new SpoilerDecorator(BasicCar, "sport");
    std::cout << CarWithSpoiler->getSpoiler() << std:: endl;
    CarWithSpoiler->drive();

    std::cout << std::endl << std::endl;

    GunDecorator *PaintedWithGun = new GunDecorator(PaintedCar, "AWP");
    PaintedWithGun->drive();

    std::cout << std::endl << std::endl;std::cout << std::endl << std::endl;std::cout << std::endl << std::endl;std::cout << std::endl << std::endl;

    return 0;
}
