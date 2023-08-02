#include <iostream>
#include <string>

int main (){

    std::string questions[] ={  "1. What band published the famous and infamous music album \"Pinkerton\"?",
                                "2. Which painter was recognized semi-offically as the father of Surrealism, despite disapproving of it himself?",
                                "3. What process was at the base of Surrealist art?",
                                "4. Who sculpted the statue on the 20c coin?"
    };

    std::string options[][4] = { { "A. P!nk", "B. Slayer", "C. Weezer", "D. O zone"},
                                { "A. De Chirico", "B. Andre Breton", "C. Max Ernst", "D. Jean Arp"},
                                { "A. Pure Psichic Automatism", "B. Heavenly Inspiration", "C. Dream Revival", "D. Decomposition of shapes and planes"},
                                { "A. Boccioni", "B. Marinetti", "C. Dottori", "D. Di Bosso"}

    };

    char answerKey[] = {'C', 'A', 'A', 'A'};

    int size = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "******************************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "******************************************************\n";

        for(int j= 0; j < sizeof(options[i])/ sizeof(options[0][0]); j++){
            std::cout << options[i][j] <<'\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]){
            std::cout << "CORRECT!\n";
            score++;
        } else {
            std::cout << "WRONG\n";
            std::cout << "Correct answer was: " << answerKey[i] << '\n';
        }

        
    }std::cout << "Your final score is: " << score << "\nCome again!";


    return 0;
}