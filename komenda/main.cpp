#include <iostream>
#include <stdlib.h>
#include <list>

class Command{
public:
    virtual void execute() = 0;
};

class Jump: public Command{
public:
    void execute() override{
        std::cout << "character jumps" << std::endl;
    }
};

class Attack: public Command{
public:
    void execute() override{
        std::cout << "character attacks" << std::endl;
    }
};

class Run: public Command{
public:
    void execute() override{
        std::cout << "character runs" << std::endl;
    }
};

int main() {
    std::list<Command*> commands;
    commands.push_back(new Jump());
    commands.push_back(new Run());
    commands.push_back(new Attack());

    for(Command *i: commands){
        if(i == nullptr){
            break;
        }
        i->execute();
        commands.pop_back();
    }

    return 0;
}
