#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries = 0;;

    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout << "********* Number Guessing Game *********\n";

    do{
        tries++;
        std::cout << "Enter a guess between (1-100): ";

        if (!(std::cin >> guess)) {
            std::cout << "Invalid input. Please enter a valid integer.\n";
            std::cin.clear(); // Clear the error state of cin
            while (std::cin.get() != '\n') // Consume and discard remaining characters until newline
                continue;
            continue;
            
            }

        

        if (guess > num){

            std::cout << "\nToo high!\n\n";
        } else if (guess < num) {
            std::cout << "\nToo low!\n\n";
        }
    }while (guess != num);

    std::cout << "\nThe number was " << num << ", your guessed it after " << tries << " tries. \n\n";
    std::cout << "**************************";


    return 0;
}