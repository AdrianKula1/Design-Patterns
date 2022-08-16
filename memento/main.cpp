#include <iostream>
#include <list>

class Memento{
    int HP = 0;
public:
    Memento(int HP){
        this->HP=HP;
    }
    int getHP(){
        return this->HP;
    }
};

class MementoManager{
    std::list<Memento*> mementos;
public:
    void saveMemento(Memento *memento){
        mementos.push_back(memento);
    }

    Memento* load(int index){
        auto x = mementos.begin();
        std::advance(x, 2);
        return *x;
    }
};

class Player{
    int HP=100;
public:
    void dealDamage(int damage){
        HP-=damage;
    }

    int getHP(){
        return HP;
    }

    Memento* createMemento(){
        return new Memento(this->HP);
    }

    void loadMemento(Memento* memento){
        this->HP=memento->getHP();
    }
};

int main(){
    MementoManager *manager = new MementoManager();
    Player *player = new Player();

    std::cout << player->getHP() << std::endl;
    manager->saveMemento(player->createMemento());

    player->dealDamage(10);
    std::cout << player->getHP() << std::endl;

    player->loadMemento(manager->load(0));
    std::cout << player->getHP() << std::endl;

}