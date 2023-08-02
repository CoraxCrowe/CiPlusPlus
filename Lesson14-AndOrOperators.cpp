#include <iostream>

int main(){

    int temp;
    bool raining = false;

    std::cout << "Enter temperature: ";
    std::cin >> temp;

    if (temp > 15 && temp < 30){
        std::cout << "Nice weather we're having";
    }   else 
    if (temp < 15 || temp > 30 ){
        std::cout << "Piove, governo ladro.";
    }
    
    if (!raining){

        std::cout << '\n' << "Il sole spende, o perlomeno non piove.";
    }
    return 0;
}