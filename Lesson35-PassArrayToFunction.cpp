#include <iostream>

double getTotal(double prices[],int size);

int main() {

    double prices[] = {32.00, 41.99,50.00, 19.99, 23.50};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);

    std::cout << total << "$";
    
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0; // when a function is passed an array, it decays into a pointer, that points to the position of its first element, meaning the funtion doesn't know how long the array is anymore

    for(int i = 0; i<size;  i++){
        total = total + prices[i];
    }

    return total;

}