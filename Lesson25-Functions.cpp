#include <iostream>
#include <string>

void mussoleenee(std::string dictator){

    std::cout << dictator <<": Vincere! E VINCEREMO!\n";
}

int main(){

    std::string name = "Mussolini";

    for (int i = 0; i<10; i++){
        mussoleenee(name);
    }
    
    return 0;
}