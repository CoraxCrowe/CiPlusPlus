#include <iostream>

int main() {

    int number = 9;

    //number % 2 ? std::cout << "Number is odd." : std::cout << "Number is even.";
    std::cout << (number % 2 ? "Number is odd." :  "Number is even.");

    return 0;
}