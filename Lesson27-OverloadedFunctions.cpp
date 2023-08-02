#include <iostream>
#include <string>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);


int main(){

    bakePizza();

    bakePizza("mushroom");

    bakePizza("pineapple", "cyanide");

    return 0;
}

void bakePizza(){
    std::cout << "Here's your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "Here's your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here's your " << topping1 << " and " << topping2 << " pizza!\n";
}