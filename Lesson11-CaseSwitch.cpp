#include <iostream>
#include <string>

int main(){

    int month;
    std::string monthName;
    std::cout << "Enter the month 1-12: ";
    std::cin >> month;

    switch(month) {
        case 1: monthName = "January";
            break;
        case 2: monthName = "February";
            break;
        case 3: monthName = "March";
            break;
        case 4: monthName = "April";
            break;
        case 5: monthName = "May";
            break;
        case 6: monthName = "June";
            break;
        case 7: monthName = "July";
            break;
        case 8: monthName = "August";
            break;
        case 9: monthName = "September";
            break;
        case 10: monthName = "October";
            break;
        case 11: monthName = "November";
            break;
        case 12: monthName = "December";
            break;
        default: 
            monthName = "time you learn how to read and decipher text, retard";
        }

    std::cout << "I can tell you it's " << monthName << ".";

    return 0;
}