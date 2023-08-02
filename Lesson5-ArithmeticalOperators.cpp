#include <iostream>

int main() {

    int students=20;

    //addition operators

    students +=1;
    students ++;
    
    // subtraction operators

    students -=1;
    students --;

    //multiplication

    students *= 3;

    //division 

    students /= 2;

    int remainder = students % 4;

    std::cout << students <<'\n';
    
    std::cout << remainder << '\n';

    return 0;
}