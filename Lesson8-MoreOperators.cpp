#include <iostream>
#include <cmath>

int main() {

    double w= 2.12;
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);         //returns highest value
    std::cout << z << '\n';

    z = std::min(x, y);         //returns lowest value
    std::cout << z << '\n';

    z = pow(x, y);              //returns x to the power of y
    std::cout << z << '\n';
    
    z = sqrt(y);                //returns squareroot of y
    std::cout << z << '\n';

    z = abs(x-y);               //returns absolute value of number
    std::cout << z << '\n';

    z = round(w);               //returns value rounded to closest natural
    std::cout << z << '\n';

    z = ceil(w);                //returns value rounded to previous natural
    std::cout << z << '\n';

    z = floor(w);               //returns value rounded to next natural
    std::cout << z << '\n';

                                // more in libraries under cmath

    return 0;
}