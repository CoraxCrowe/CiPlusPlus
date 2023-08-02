#include <iostream>
#include <string>

int main(){

    std::string name;

    std::cout << "Kindly insert your name: ";
    std::getline(std::cin, name);

    if(name.length()<12){

        std::cout << "You have too few surnames, this service is for nobility only.";
        
    
    } else {

        std::cout << "Welcome, milord" << '\n';
     

    /*if (name.empty()) {

        std::cout << "Please type your name before pressing RETURN.";
    } else {
        std::cout << "Welcome sire " << name;
    } */

    /*name.clear();

    std::cout << "Welcome sire " << name;*/

        name.append(" of Hapsburg");

        std::cout << "Here you be crowneth " << name << '\n'; 

        std::cout << "Thine handkerchief shalt be branded with an ornate " << (name.at(0)) << '\n';

        name.erase(0, name.find(' ') +1);
        
        std::cout << "I've kindly removed your first name, sire " << name << '\n';

        name.insert((name.length()/2), "|");

        std::cout << "I've split your name down the middle for you, sire " << name << '\n'; 

    }


    return 0;
}