#include <iostream>
#include <algorithm>
#include <string>

int main(){

    std::string foods[33];
    int size = sizeof(foods)/sizeof(foods[1]);


    std::fill(foods, foods + size/3, "Cookie"); //starting point, end point, element ot fill with
    std::fill(foods + size/3, foods + 2*size/3, "Ass");
    std::fill(foods + 2*size/3, foods + size, "Banan");

    for (std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}