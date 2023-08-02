#include <iostream>

int main() {

    double gpa = 2.5;
    std::string names[] = {"Corax", "Cornix", "Zavat"};
    std::string garage[5];
    char grade = 'd';
    bool trueisfalse = false;

    std::cout << sizeof(names) << " bytes\n";
    std::cout << sizeof(names)/sizeof(std::string) << " elements\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(garage) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(trueisfalse) << " bytes\n";

    return 0;
}

