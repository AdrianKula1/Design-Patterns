#include <iostream>
#include <string>
#include <list>
#include <map>

class User{
private:
    static int counter;
public:
    static int getCounter(){
        return counter;
    }
};

int User::counter=2;

class Pizza{
protected:
    float price=10;
public:

    virtual float getPrice(){
        return price;
    }
};

class Hawajska: public Pizza{
private:

public:
    Hawajska(float cena){
        this->price=cena;
    }
};

class Dodatek: public Pizza{
protected:
    Pizza *pizza = nullptr;
public:
    Dodatek(Pizza *pizza){
        this->pizza=pizza;
    }

    float getPrice() override{
        return pizza->getPrice();
    }
};

class Grzyby: public Dodatek{
private:
public:
    Grzyby(Pizza *pizza): Dodatek(pizza){}

    float getPrice() override{
        return pizza->getPrice()+5;
    }
};

class Papryka: public Dodatek{
private:
public:
    Papryka(Pizza *pizza): Dodatek(pizza){}

    float getPrice() override{
        return pizza->getPrice()+5;
    }
};

int main() {


    Pizza *pizza = new Papryka( new Grzyby(new Hawajska(15)));
    std::cout << pizza->getPrice() << std::endl;


   return 0;
}
