#include <iostream>

int main(){

    int* pointer = nullptr;
    int x = 123;
    // if pointer point to free memory or you dereference a null pointer, you'll want to go back at painting immediately

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Address not assigned";

    } else {
        std::cout << "Address assigned\n";
        std::cout << *pointer;
    }

    return 0;
}