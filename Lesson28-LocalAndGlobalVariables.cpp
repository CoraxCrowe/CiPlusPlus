#include <iostream>

int myNum = 6;              //Global can be used by every scope
void printNum();

int main(){

    int myNum;

    myNum=1;                //Local has prio on Gloabl on its own scope

    printNum();

    return 0;
}

void printNum(){
    std::cout << myNum;
}