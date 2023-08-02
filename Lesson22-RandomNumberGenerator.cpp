#include <iostream>
#include <ctime>


 int main(){

    srand(time(NULL));

    int num = rand();

    std::cout << num <<'\n';

    int num2 = rand() % 6 +1;

    std:: cout << num2 << '\n';

    return 0;
 }