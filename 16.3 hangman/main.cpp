#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

const int NUM = 26;

int main()
{
    const std::string wordsList[NUM] = {
        "agrest", "bigos", "czara",
        "drewno", "ekipa", "figura", "gorycz", "hiena", "iskra",
        "junior", "krata", "lizak", "miska", "nurek", "obuwie",
        "pisak", "rozum", "smalec", "taryfa", "umiar", "video",
        "welon", "yeti", "zalew", "zimno", "zapas"
    };

    srand(time(NULL));
    char play;
    std::cout << "Do you want to play \"Game of Words\"? <t/n> ";
    std::cin >> play;
    std::cin.get();
    play = tolower(play);
    while(play == 't')
    {
        std::string target = wordsList[rand() % NUM];
        int lengthOfTarget = target.size();
        std::string attempt(lengthOfTarget, '-');
        std::string badChars; 
        int guesses = 6;
        std::cout << "Guess secret word. It has " << lengthOfTarget << " letters.\n";
        std::cout << "You can guess " << guesses << " times only." << std::endl;
        std::cout << "Word to guess: " << attempt << std::endl;
        std::cout << std::endl;

        while(guesses > 0 && attempt != target)
        {
            char letter;
            std::cout << "Guess the letter: ";
            std::cin >> letter;
            std::cin.get();
            if(badChars.find(letter) != std::string::npos || attempt.find(letter) != std::string::npos )
            {
                std::cout << "The letter was it already. Try another letter.\n";
                continue;
            }
            int loc = target.find(letter);
            if(static_cast<const long unsigned int>(loc) == std::string::npos)
            {
                std::cout << "There is no such letter in the word. Try again.\n";
                guesses--;
                badChars += letter;
            }
            else
            {
                std::cout << "Correct letter.\n";
                attempt[loc] = letter;
                
                loc = target.find(letter, loc+1);
                while(static_cast<const long unsigned int>(loc) != std::string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc+1);
                }
            }
            std::cout << "Your deciphered word at this stage: " << attempt << std::endl;
            if(attempt != target)
            {
                if(badChars.length()> 0)
                    std::cout << "Your guessed incorrect letters: " << badChars << std::endl;
                std::cout << "Right now you can make " << guesses << " mistakes only." << std::endl;
            }
        }
        if(guesses > 0)
            std::cout << "That's it. You gesses correctly entire word. :)" << std::endl;
        else
            std::cout << "I'm sorry you didn't guess the word. The correct word was: " << target << std::endl;
        std::cout << "Do you want to play again? <t/n>: ";
        std::cin >> play;
        play = tolower(play);
    }
    return 0;
}