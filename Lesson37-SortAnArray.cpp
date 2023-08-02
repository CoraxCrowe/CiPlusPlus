#include <iostream>

void sortArray(int array[], int size);

int main(){

    int numbers[]= {2, 4, 6, 8, 7, 3, 9, 10, 1, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sortArray(numbers, size);

    for(int number : numbers){
        std::cout << number << " ";
    }

    return 0;
}

void sortArray(int array[], int size){

    int temp;

    //bubble sort: for each pair of numbers,order them in either ascending or descending order. Repeat a number of times equal to array size, every passage will put the biggest currently oop number in its right place

    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size -i -1; j++){
            if (array[j] > array[j+1]){
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            } 

            
        } 
        for (int n =0; n < size; n++){
                std::cout << array[n] << " ";
            } std::cout << '\n'; 
    }
}