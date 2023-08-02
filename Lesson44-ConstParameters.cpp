#include <iostream>
#include <string>

// variabili precedute da const non posso essere alterate, se passate by reference danno un errore, sono read-only 

void printInfo(const std::string name, const int age);

int main(){

    std::string name = "Brocode";
    int age = 23;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){

    std::cout << name << ", " << age << " years old.";
}