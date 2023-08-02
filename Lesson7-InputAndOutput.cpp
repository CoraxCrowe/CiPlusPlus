#include <iostream>
#include <string>

int main(){

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    std::string skincolor;
    int age;

    std::cout << "What's your name?" << '\n';
    std::cin >> name;

    std::cout << "Oh, hi " << name << "." << '\n';

    std::cout << "How old are you?" << '\n';
    std::cin >> age;

    std::cout << "Ain't no way you're " << age << " man." << '\n';

    std::cout << "What's your skin color?" << '\n';

    std::getline(std::cin >> std::ws, skincolor); 
    
    //using cin and then getline causes the code to accept a white space char as the input for getline,
    // >> std::ws prevents this 

    std::cout << "Get yo " << skincolor << " ass outta here." << '\n';



    return 0;
}