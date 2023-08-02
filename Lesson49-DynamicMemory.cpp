#include <iostream>

int main(){

    int *pNum = NULL;
    int *pArr = NULL;

    pNum = new int;

    pArr = new int[4];

    *pNum = 21;

    std::cout << "Address: " << pNum <<"\nValue: " << *pNum;

    delete pNum; // if you don't delete, it causes memory leaks
    delete[] pArr;

    return 0;
}