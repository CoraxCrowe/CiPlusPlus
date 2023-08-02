#include <iostream>

int main() {

    char op;

    double num1;
    double num2;
    double result;

    std::cout << "--------calculator-----------" <<'\n';
    
    std::cout <<"Enter number one: ";
    std::cin >> num1;
    
    std::cout <<"Enter operator (+, -, *, /): ";
    std::cin >> op;
    
    std::cout <<"Enter number two: ";
    std::cin >> num2;

    std::cout << '\n';

    switch(op) {
        case '+':
            result = num1 + num2;
            std:: cout << num1 << op << num2 << "=" << result;
            break;
        case '-':
            result = num1 - num2;
            std:: cout << num1 << op << num2 << "=" << result;
            break;
        case '/':
            result = num1 / num2;
            std:: cout << num1 << op << num2 << "=" << result;
            break;
        case '*':
            result = num1 * num2;
            std:: cout << num1 << op << num2 << "=" << result;
            break;
        default:
            std::cout << "output isn't valid";
    }
  

    std::cout << '\n' << "--------------------------";

    return 0;
}