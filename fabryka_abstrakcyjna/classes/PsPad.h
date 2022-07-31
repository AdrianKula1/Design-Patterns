//
// Created by Adrian on 12.08.2021.
//

#ifndef FABRYKA_ABSTRAKCYJNA_PSPAD_H
#define FABRYKA_ABSTRAKCYJNA_PSPAD_H
#include "Pad.h"

class PsPad: public Pad{
public:
    void checkConnection() override;
};


#endif //FABRYKA_ABSTRAKCYJNA_PSPAD_H
