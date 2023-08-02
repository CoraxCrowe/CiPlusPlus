#include <iostream>

int main(){

    int age;

    std::cout << "Insert age here: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "Get lost ya dinosaur.";
    }
    else if(age >= 18){
        std::cout << "Welcome to my horse betting site!";
    }
    else if(age <0){
        std::cout << "Too hasty, son, at least wait to be born.";
    }
    else if(age <18){
        std::cout << "You're to young to access my horse betting site!";
    }
    

    return 0;
}