#include <iostream>

int main() {
    // constants can't be changed
    const double PI = 3.14159;
    double radius = 44;
    double circumference = 2 * radius * PI;
    std::string uom = " feet";

    std::cout << "The circumference of a circle of radius " << radius << uom << " is equal to " << circumference << uom << "." << '\n';
   

    return 0;
}