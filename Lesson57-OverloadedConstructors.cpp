#include <iostream>
#include <string>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

        Pizza(std::string topping1){
            this->topping1 = topping1;
        }

        Pizza(std::string topping1, std::string topping2){
            this->topping1 = topping1;
            this->topping2 = topping2;
        }

        Pizza(){
            
        }
};
int main(){

    Pizza pizza1("pepperoni");
    Pizza pizza2("pepperoni", "sblurna");
    Pizza pizza3();
    
    std::cout << pizza1.topping1;

    return 0;
}