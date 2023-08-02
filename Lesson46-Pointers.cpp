#include <iostream>
#include <string>

int main(){

    //a pointer contains an address in memory
    //& address of operator | makes a var into an address
    //* dereference operator | gives the var of the address

    std::string name = "Brocode";
    int age= 23;


    std::string *pName  = &name;
    int *pAge = &age;

    std::cout << *pName;


    return 0;
}