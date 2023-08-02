#include <iostream>
#include <string>
void swap(std::string &x, std::string &y);

int main(){

    std::string x = "Water";
    std::string y = "Bleach";
    
    swap(x, y);

    std::cout << x << " and " << y;

    return 0;
}

void swap(std::string &x, std::string &y){ //using &x and &y uses the ADDRESS of x and y, thus changing them for real
    std::string temp;

    temp = x; //x and y are here treated as different vars with the same values,the real x and y don't change
    x = y;
    y= temp;
}