#include <iostream>


void iterWalk(int numberOfSteps);

void recurWalk(int numberOfSteps);

int main() {


    int numberOfSteps = 12;
    iterWalk(numberOfSteps);
    recurWalk(numberOfSteps);
    
    
    return 0;
}

void iterWalk(int numberOfSteps){
    for (int i = 0; i<numberOfSteps; i++){
        std::cout << "You take a step!\n";
    }
}

void recurWalk(int numberOfSteps){
    if(numberOfSteps > 0){
        std::cout << "You take a step\n";
        numberOfSteps --;
        recurWalk(numberOfSteps);
        
    }
}