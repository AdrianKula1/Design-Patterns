#include <iostream>

class Pizza{
protected:
    float price=10;
public:

    virtual float getPrice(){
        return price;
    }
};

class Hawaiian: public Pizza{
private:

public:
    Hawaiian(float price){
        this->price=price;
    }
};

class Addon: public Pizza{
protected:
    Pizza *pizza = nullptr;
public:
    Addon(Pizza *pizza){
        this->pizza=pizza;
    }

    float getPrice() override{
        return pizza->getPrice();
    }
};

class Mushroms: public Addon{
private:
public:
    Mushroms(Pizza *pizza): Addon(pizza){}

    float getPrice() override{
        return pizza->getPrice()+5;
    }
};

class Pepper: public Addon{
private:
public:
    Pepper(Pizza *pizza): Addon(pizza){}

    float getPrice() override{
        return pizza->getPrice()+5;
    }
};


int main() {
    Pizza *pizza = new Pepper( new Mushroms(new Hawaiian(15)));
    std::cout << pizza->getPrice() << std::endl;


   return 0;
}
