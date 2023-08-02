#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "******Temperature Conversion App*******" << '\n';
    std::cout << "F-> Fahrenheit\n";
    std::cout << "C-> Celsius\n";
    std::cout << "Select unit to convert in: ";
    std::cin >>unit;

    if (unit == 'f' || unit == 'F'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = 1.8 * temp + 32.0;

        std::cout << "Temperature is equal to " << temp << " degrees Fahrenheit.";

    }

    else if (unit == 'c' || unit == 'C'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1*8;

        std::cout << "Temperature is equal to " << temp << " degrees Celsius.";

    } 

    else{
        std::cout << "Only Celsius and Fahrenheit are supported.";
    }

    return 0;
}