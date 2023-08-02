#include <iostream>
#include <string>

int main() {


    std::string students[] = {"Spongebob", "Squidward", "Patrick", "Plankton"};

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++){

        std::cout << students[i] << '\n';
    }

    for (int j = 0; j < sizeof(grades)/sizeof(char); j++){

        std::cout << grades[j] << '\n';
    }


    return 0;
}