#include <iostream>

int main() {

    double x = (int) 3.14; //saved as double, after having been converted to int, explicit

    char y = 100; // saved as 'd', implicit

    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;

    std::cout << "Your Score: " << score << "%";


    return 0;
}