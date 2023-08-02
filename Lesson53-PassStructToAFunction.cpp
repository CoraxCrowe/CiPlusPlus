#include <iostream>
#include <string>

//passing a struct by default passes by value, but with & can pass by reference

struct car{
    std::string model;
    int year;
    std::string color;

};

void printCar(car &car);
void paintCar(car &car, std::string color);

int main(){

    car car1;
    car car2;

    car1.model = "Bugotti";
    car1.year = 2001;
    car1.color = "Orange";

    car2.model = "Ferrero";
    car2.year = 2009;
    car2.color = "Maroon";

    std::cout << &car1 << '\n';

    paintCar(car1, "Blue");
    paintCar(car2, "Silver");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(car &car){

    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
    std::cout << &car << '\n';
}

void paintCar(car &car, std::string  color){

    car.color = color;
}