#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do{
        std::cout << "******************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "******************\n";
        std::cout << "1: Show Balance\n";
        std::cout << "2: Deposit Money\n";
        std::cout << "3: Withdraw Money\n";
        std::cout << "4: Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                showBalance(balance);
                break;
            
            case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;

            case 4: std::cout << "Thanks for coming!\n";
                break;
                
            default: std::cout << "Wrong input\n";
        }
    }

    while(choice !=4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is " << std::setprecision(2) <<std::fixed << balance << "$\n"; 
}

double deposit(){
    
    double amount =0;

    std::cout <<"Set amount to deposit: ";
    std::cin >> amount;

    if (amount>0){
    std::cout << "You deposited " << amount << "$ in your account.\n";

    return amount;
    } else {
        std::cout << "Not a valid amount.";

        return 0;
    }

}

double withdraw(double balance){

    double amount;
    std::cout << "Insert amount to be withdrawn: ";
    std::cin >> amount;

    if (amount>0 && amount <= balance){
    std::cout << "You withdrew " << amount << "$ from your account.\n";

    return amount;
    } else if (amount > balance)
    {
        std::cout << "Balance insufficient.\n";
        return 0;

    } else {
        std::cout << "Not a valid amount.\n";

        return 0;
    }
}