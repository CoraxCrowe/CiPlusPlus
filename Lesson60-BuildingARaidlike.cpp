
#include <iostream>
#include <ctime>

constexpr const char* SYMBOLS = "B@?$7";
constexpr float SCORES[] = {1.2, 1.5, 2.0, 3, 5};
constexpr const char* WHEEL1 = "BB7?@?BBB7?7@@$";
constexpr const char* WHEEL2 = "B$?B@@7B?$?$B7B";
constexpr const char* WHEEL3 = "BBB@@77$7@B@?B$";

constexpr int WHEELSIZE = 15;
constexpr int NUMBEROFSYMBOLS = 15;

int getInputBet(int score);
char (*generateWheelsSymbols())[3];
char (*drawBoard(char currentBoard[3][3]))[3];
float fetchMultiplicatorFromBoard(char currentBoard[3][3]);

int main() {
    
  int score = 2500;
  int bet;
  int numOfBigRolls = 0;

  srand(time(NULL));

  while (score > 100) {

    bet = getInputBet(score);
    if (bet >= 500) { numOfBigRolls ++ ;}
    score -= bet;

    int roundWin = bet * fetchMultiplicatorFromBoard(drawBoard(generateWheelsSymbols()));
    
    if (roundWin == 0) {
      std::cout << "Tip: 99% of gamblers quit just before they win big.\n\n";
    } else {
      std::cout << "You won " << roundWin << " Temucoin!\n\n";
    }

    score += roundWin;
    bet = 0;   
  }

  std::cout << "GAME OVER\n\nYOU ROLLED BIG A TOTAL OF " 
      << numOfBigRolls << " TIMES.";

  return 0;
  
}

  char (*generateWheelsSymbols())[3] {
  static char currentBoard[3][3];
  int pos1 = rand();
  int pos2 = rand();
  int pos3 = rand();

  
  for (int j = 0; j < 3; j++) {
    currentBoard[0][j] = WHEEL1[(pos1 + j) % WHEELSIZE];
    currentBoard[1][j] = WHEEL2[(pos2 + j) % WHEELSIZE];
    currentBoard[2][j] = WHEEL3[(pos3 + j) % WHEELSIZE];    
  }    
  

  return currentBoard;
}


char (*drawBoard(char currentBoard[3][3]))[3] { 
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << currentBoard[i][j] << "   ";
    }
    std::cout << std::endl << std::endl;
  }
  return currentBoard;
}

float fetchMultiplicatorFromBoard(char currentBoard[3][3]) { 
  
  float multiplicator = 0;

  for (int i = 0; i < 3; i++){  //This one checks rows
    if (currentBoard[i][0] == currentBoard[i][1] && currentBoard[i][1] == currentBoard[i][2]) {
      for (int j = 0; j < NUMBEROFSYMBOLS; j++) {
        if (currentBoard [i][0] == SYMBOLS[j]) {
          multiplicator += SCORES[j];
        }
      }
    }
  }

  for (int i = 0; i < 3; i++){  //This one checks columns
    if (currentBoard[0][i] == currentBoard[1][i] && currentBoard[1][i] == currentBoard[2][i]) {
      for (int j = 0; j < NUMBEROFSYMBOLS; j++) {
        if (currentBoard [0][i] == SYMBOLS[j]) {
          multiplicator += SCORES[j];
        }
      }
    }
  }

  
  if (currentBoard[0][0] == currentBoard[1][1] //These two checks diagonals
      && currentBoard[1][1] == currentBoard[2][2]) {
    for (int j = 0; j < NUMBEROFSYMBOLS; j++) {
      if (currentBoard [0][0] == SYMBOLS[j]) {
        multiplicator += SCORES[j];
      }
    }
  }
  if (currentBoard[0][2] == currentBoard[1][1] 
      && currentBoard[1][1] == currentBoard[2][0]) {  
        for (int j = 0; j < NUMBEROFSYMBOLS; j++) {
      if (currentBoard [0][2] == SYMBOLS[j]) {
        multiplicator += SCORES[j];
      }
    }
  }
  
  return multiplicator;
}

int getInputBet(int score) {
    int bet;
    
    while (true) {
      std::cout << "YOUR CURRENT BALANCE: " << score << " Temucoins.\n";
      std::cout << "________________________________________________\n";
      std::cout << "insert your betting amount (100-500 Temucoin): ";
      std::cin >> bet;

      if (bet >= 100 && bet <= 500 && bet <= score) {
        return bet; 
      }
      std::cout << "\nInvalid input. Please enter an integer between 100 and 500.\n\n";
      std::cin.clear(); 
      std::cin.ignore(10000, '\n');
    }
}


