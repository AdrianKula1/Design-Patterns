#include <iostream>
class Weapon{
protected:
    int damage=0;
public:
    Weapon(int damage){
        this->damage=damage;
    }

    virtual void shoot(std::string opponent)=0;
protected:
    virtual void dealDamage(std::string opponent)=0;
};

class Player{
    Weapon *currentWeapon;
public:
    Player(Weapon *weapon){
        this->currentWeapon=weapon;
    }

    void changeWeapon(Weapon *weapon){
        this->currentWeapon=weapon;
    }

    void attack(std::string opponent){
        this->currentWeapon->shoot(opponent);
    }
};



class RocketLauncher: public Weapon{
public:
    RocketLauncher(int damage): Weapon(damage){}
    void shoot(std::string opponent) override{
        this->dealDamage(opponent);
        this->explode();
    }
    void dealDamage(std::string opponent) override{
        std::cout << "rocket dealt " << this->damage << " damage to " << opponent << std::endl;
    }

    void explode(){
        std::cout << "rocket exploded" << std::endl;
    }
};

class Gun: public Weapon{
public:
    Gun(int damage): Weapon(damage){}
    void shoot(std::string opponent) override{
        this->dealDamage(opponent);
    }
    void dealDamage(std::string opponent) override{
        std::cout << "bullet dealt " << this->damage << " damage to " << opponent << std::endl;
    }
};

int main() {
    Player player(new Gun(10));
    player.attack("Villan");

    player.changeWeapon(new RocketLauncher(50));
    player.attack("Villan");
    return 0;
}
