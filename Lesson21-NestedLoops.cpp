#include <iostream>

int main(){

    /*for (int i = 0; i <=10; i++)
    {
        for (int j=0; j<= i; j++)
        {
            std::cout << j << ' ';
        }
    }*/

    


    int x;
    int y;
    char symbol;

    std::cout << "Insert width (natural number): ";
    std::cin >> x;

    std::cout << "\nInsert height (natural number): ";
    std::cin >> y;

    std::cout << "\nInsert symbol (single character, ASCII only): ";
    std::cin >> symbol;

    std::cout << '\n';

    for (int i = 1; i<= y; i++){
        for (int j = 1; j <= x; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}