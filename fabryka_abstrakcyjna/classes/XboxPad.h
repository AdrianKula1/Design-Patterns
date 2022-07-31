//
// Created by Adrian on 12.08.2021.
//

#ifndef FABRYKA_ABSTRAKCYJNA_XBOXPAD_H
#define FABRYKA_ABSTRAKCYJNA_XBOXPAD_H
#include "Pad.h"

class XboxPad: public Pad {
public:
    void checkConnection() override;
};

#endif //FABRYKA_ABSTRAKCYJNA_XBOXPAD_H
