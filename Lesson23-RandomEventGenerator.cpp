#include <iostream>
#include <ctime>

int main()
{

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You win a Tesla!" << '\n';
            break;
        case 2: std::cout << "You win testicular torsion!" << '\n';
            break;
        case 3: std::cout << "You win a racial slur!" << '\n';
            break;
        case 4: std::cout << "You win a black person!" << '\n';
            break;
        case 5: std::cout << "You lose access to your email address!" << '\n';
            break;
    }

    return 0;
}