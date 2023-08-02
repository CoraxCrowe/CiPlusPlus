#include <iostream>

int main(){

    // code by Lorenzo The Mussy

    /* vietato copiare codice 
    e/o rimuovere l'attribuzione*/
    
    std::cout << "Hello world" << '\n';
    std::cout << "I said Hello" << '\n';

    // whole integers
    int x = 5; 
    int y = 6;
    int sum = x + y;

    std::cout << x <<'\n';
    std::cout << y <<'\n';
    std::cout << sum <<'\n';

    // numbers with decimals
    double price = 11.99;
    double temperature = 29.5;

    // single character
    char grade = 'A';
    char meme = 'E';
    char currency = '$';

    // yeses and noes
    bool israining = false;
    bool black = true;

    //strings of text, sequence of characters
    std::string name = "Jerma the Killer";

    std::cout << "Hello, mr." << name << '\n'; //error? Better Call Luca
    std::cout << "Wanna by my soul for " << price << currency << "?" << '\n';



    return 0;
}