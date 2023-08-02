#include <iostream>

int main() {

    for(int i =1; i <= 20; i++){

        if (i == 13){
            continue;
        } else if(i == 17) {
            break;
        }

        std::cout << "And a " << i << '\n';

    }
    return 0;
}