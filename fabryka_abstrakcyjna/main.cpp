#include <iostream>
#include "classes/PlayStation.h"
#include "classes/Xbox.h"

int main() {

    PlayStation P1 = PlayStation();
    Xbox X1 = Xbox();

    PsGame* PsGame1 = dynamic_cast<PsGame *>(P1.getGame());
    XboxGame* XboxGame1 = dynamic_cast<XboxGame *>(X1.getGame());
    PsGame1->launch();
    XboxGame1->launch();


    PsPad* PsPad1 = dynamic_cast<PsPad *>(P1.getPad());
    XboxPad* XboxPad1 = dynamic_cast<XboxPad *>(X1.getPad());
    PsPad1->checkConnection();
    XboxPad1->checkConnection();



    return 0;
}
