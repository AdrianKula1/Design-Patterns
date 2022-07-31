
//
// Created by Adrian on 17.07.2021.
//

#ifndef OBSERWATOR_CHARACTER_H
#define OBSERWATOR_CHARACTER_H

class Character{
public:
    virtual void addObserver();
    virtual void deleteObserver();
    virtual bool updateObservers();
};


#endif //OBSERWATOR_CHARACTER_H
