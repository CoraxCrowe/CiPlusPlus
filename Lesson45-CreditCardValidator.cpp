#include <iostream>
#include <string>

int getDigit(int const number);
int sumOddDigits(std::string const cardNumber);
int sumEvenDigits(std::string const cardNumber);

int main() {

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result%10 == 0) {

        std::cout << "Our credit card is valid.";
    } 
    else {

        std::cout << "Straight up random numbers ngl fr.";
    }

    return 0;
}

int getDigit(int const number) {

    return number%10 + number/ 10 % 10;
}

int sumOddDigits(std::string const  cardNumber) {

    int sum;

    for(int i = cardNumber.size()-1; i >=0; i-=2) {
        sum += (cardNumber[i] - '0');
    }

    return sum;
}

int sumEvenDigits(std::string const  cardNumber) {

    int sum;

    for(int i = cardNumber.size()-2; i >=0; i-=2) {
        sum += getDigit((cardNumber[i] - '0')*2);
    }


    
    return sum;
}
