#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9];
    int size = sizeof(spaces)/sizeof(spaces[0]);

    std::fill(spaces, spaces + size, ' ');

    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){

        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        if(checkTie(spaces)){
            running = false;
            break;
        }
    }

    std::cout << "Thanks for playing!";


    return 0;
}

void drawBoard(char *spaces){

    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player){

    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9)\n";
        std::cout << "If you enter a string yur mom dies.";
        std::cin >> number;
        number--;
    } while ((number < 0) || (number > 8) && spaces[number]==' ');

    if (spaces[number] == ' '){
        spaces[number] = player;
    }

    
}

void computerMove(char *spaces, char computer){

    int number;
    srand(time(0));

    while(true){

        number = rand() %9;

        if(spaces[number] == ' '){

            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){

    if(spaces[0] == spaces[1]&& spaces[1] == spaces[2] && spaces[0] != ' '){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else
    if(spaces[3] == spaces[4]&& spaces[4] == spaces[5] && spaces[3] != ' '){
        spaces[3] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else
    if(spaces[6] == spaces[7]&& spaces[7] == spaces[8] && spaces[6] != ' '){
        spaces[6] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else 
    if(spaces[0] == spaces[3]&& spaces[3] == spaces[6] && spaces[0] != ' '){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else
    if(spaces[1] == spaces[4]&& spaces[4] == spaces[7] && spaces[1] != ' '){
        spaces[1] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else
    if(spaces[2] == spaces[5]&& spaces[5] == spaces[8] && spaces[2] != ' '){
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else 
    if(spaces[0] == spaces[4]&& spaces[4] == spaces[8] && spaces[0] != ' '){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else 
    if(spaces[2] == spaces[4]&& spaces[4] == spaces[6] && spaces[2] != ' '){
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else return 0;

    return 1;
    
}

bool checkTie(char *spaces){

    for(int i= 0; spaces[i] != ' '; i++){
        if (i==8){
            std::cout << "It's a tie.";
            return 1;
        }
    }

    return 0;
}
