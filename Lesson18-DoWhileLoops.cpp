#include <iostream>

int main(){

    int value;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> value;

    }while(value <= 0);

    std::cout << "Your number (" << value << ") is positive.";

    return 0;
}