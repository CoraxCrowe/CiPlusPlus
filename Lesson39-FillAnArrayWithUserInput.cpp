#include <iostream>
#include <string>
#include <limits>

int main() {

    std::string foods[5];
    std::string temp;

    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i= 0; i< size; i++){
        std::cout << "Enter a food you like #" << i +1 << " or press q to quit: ";
        std::getline(std::cin, temp);

        if (temp == "q"){
            break;
        } else {
            foods[i] = temp;
        }
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "I see you are a fan of the following: \n";
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }
    return 0;
}