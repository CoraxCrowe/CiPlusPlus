#include <iostream>
#include <string>

class Human{
    public:
        std::string name = "Rick";
        std::string job = "Scientist";
        int height = 180;

        void eat(){
            std::cout << "chomp chomp\n";
        }

        void drink(){
            std::cout << "glug glug\n";
        }

        void sleep(){
            std::cout << "zzzz\n";
        }
};

int main(){

    Human human1;
    Human human2;

    human1.name= "Rick";
    human1.job = "Scientist";
    human1.height = 180;

    human2.name= "Mortey";
    human2.job = "Unemployed";
    human2.height = 19;

    std::cout << "Name: " << human1.name << "\nHeight: " << human1.height << "cm\nProfession: " << human1.job <<'\n';
    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << "Name: " << human2.name << "\nHeight: " << human2.height << "cm\nProfession: " << human2.job <<'\n';
    human2.eat();
    human2.drink();
    human2.sleep();


    return 0;
}