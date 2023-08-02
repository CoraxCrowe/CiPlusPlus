#include <iostream>
#include <ctime>

constexpr const char* SYMBOLS = "B@?$7";
constexpr float SCORES[] = {1.2, 1.5, 2.0, 3, 5};
constexpr const char* WHEEL1 = "BB7?@?BBB7?7@@$";
constexpr const char* WHEEL2 = "B$?B@@7B?$?$B7B";
constexpr const char* WHEEL3 = "BBB@@77$7@B@?B$";
constexpr int SIZE = 15;



char currentBoard[9];

void roll(){
    
  int pos1 = rand();
    

  int pos2 = rand();
    

  int pos3 = rand();
    

  for(int i = 0; i<3; i++) {
      currentBoard[i*3 + 0] = WHEEL1[(pos1 + i) % SIZE];
      currentBoard[i*3 + 1] = WHEEL2[(pos2 + i) % SIZE];
      currentBoard[i*3 + 2] = WHEEL3[(pos3 + i) % SIZE];
  }
    
}

void printBoard() {
    
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<3; j++) {
        std::cout << currentBoard[j + i*3] << "   ";

        
    }
    std::cout << std::endl << std::endl;
  }

}

char checkTris(int pos1, int pos2, int pos3) {
  if(currentBoard[pos1] == currentBoard[pos2] 
  && currentBoard[pos2] == currentBoard[pos3]) {
    return currentBoard[pos1];
  } 

  return ' ';
}

void checkWins(char winningSymbols[]) {
        
  winningSymbols[0] = checkTris(0, 1, 2);
  winningSymbols[1] = checkTris(3, 4, 5);
  winningSymbols[2] = checkTris(6, 7, 8);
  winningSymbols[3] = checkTris(0, 3, 6);
  winningSymbols[4] = checkTris(1, 4, 7);
  winningSymbols[5] = checkTris(2, 5, 8);
  winningSymbols[6] = checkTris(0, 4, 8);
  winningSymbols[7] = checkTris(2, 4, 6);

}

float calcMult(char* winningSymbols) {

  float scoreMult = 0;

  for(int i = 0; i<8; i++) {
    for(int j = 0; j<7; j++) {
      if (winningSymbols[i] == SYMBOLS[j]) {
      scoreMult += SCORES[j]; 
      }    
    }
  }

  return scoreMult;
}



int main() {
    
  char winningSymbols[8];
  int score = 2500;
  int bet = 0;
  int numOfBigRolls = 0;

  srand(time(NULL));

  while(score > 100) {

    do {
      std::cout << "YOUR CURRENT BALANCE: " << score << " Temucoins.\n";
      std::cout << "________________________________________________\n";
      std::cout << "insert your betting amount (100-500 Temucoin): ";
      std::cin >> bet;

      if(bet >= 100 && bet <= 500 && bet <= score) {
        break;
      } else {
        std::cout << "\nInvalid input. Please enter an integer between 100 and 500.\n\n";
      }
      std::cin.clear(); 
      std::cin.ignore(10000, '\n');
    
    } while ((bet < 100 || bet > 500) || bet >= score); 
    //((bet < 100 || bet > 500) && bet < score);

    if(bet == 500) {
      numOfBigRolls++;
    }

    score -= bet;

    roll();
    printBoard();
    checkWins(winningSymbols);
    int roundWin = bet*calcMult(winningSymbols);
    
    if(roundWin == 0) {
      std::cout << "Tip: 99% of gamblers quit just before they win big.\n\n";
    } else {
      std::cout << "You won " << roundWin << " Temucoin!\n\n";
    }

    score += roundWin;
    bet = 0;
        
  }

  std::cout << "GAME OVER\n\nYOU ROLLED BIG A TOTAL OF " << 
  numOfBigRolls << " TIMES.";

  return 0;
}

