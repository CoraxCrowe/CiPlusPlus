#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "crunch crunch\n";
    }

};

class Dog : public Animal{
    public:
        void bork(){
            std::cout << "bork! bork!\n";
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout << "Maaaeeeeeaaaaa!\n";
        }
};



int main(){

    Dog dog;

    std::cout << dog.alive <<'\n';
    dog.eat();
    dog.bork();

    Cat cat;

    std::cout << cat.alive<<'\n';
    cat.eat();
    cat.meow();

    return 0;
}