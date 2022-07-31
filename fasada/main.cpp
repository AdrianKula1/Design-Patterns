#include <iostream>
#include "headers/Person.h"

int main() {
    auto *P1 = new Person();
    P1->moveForward();
    return 0;
}
