#include <iostream>
#include "classes/RaceCar.h"
#include "classes/TIR.h"

int main() {
    RaceCar RaceCarPrototype = RaceCar("Race engine", 300);

    Car *RaceCar1 = RaceCarPrototype.Clone();
    RaceCarPrototype.Drive();
    RaceCar1->Drive();

    TIR TIRPrototype = TIR("TIR engine", 3000);
    Car *TIR1 = TIRPrototype.Clone();
    TIRPrototype.Drive();
    TIR1->Drive();

    return 0;
}
