#include <iostream>

enum dayOfTheWeek {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
 //if you dont assign ints, they will be picked in the order 0, 1, 2...

int main(){

    dayOfTheWeek today = sunday;

    switch(today){
        case sunday: std::cout << "It is sunday!";
            break;
        case monday: std::cout << "It is monday!";
            break;
        case tuesday: std::cout << "It is tuesday!";
            break;
        case wednesday: std::cout << "It is wednesday!";
            break;
        case thursday: std::cout << "It is thursday!";
            break;
        case friday: std::cout << "It is friday!";
            break;
        case saturday: std::cout << "It is saturday!";
            break;
    }



    return 0;
}