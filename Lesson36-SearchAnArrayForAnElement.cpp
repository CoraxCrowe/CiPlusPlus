#include <iostream>
//#include <string>

int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if (array[i] == element) {
            return i;
        } 
            
        
    } return -1;
}
int main(){

    int numbers[] = {9, 4, 3, 6, 10, 7, 2, 1, 8, 5};

    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to look for: ";
    std:: cin >> myNum;
    std::cout << '\n'; 

    index = searchArray(numbers, size, myNum);
    if (index != -1){
        std::cout << myNum << " is at index " << index << '\n';
    } else {
        std::cout << myNum << " is not in the array.\n";
    }
    

    return 0;
}