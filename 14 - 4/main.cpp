#include "bad_dude.h"



void setOfPersonsData(Person * persons[], int howManyPersons);

int main()
{
    std::cout << "Welcome! In this app you can make some data about famous Persons(Gunslinger/PokerPlayers/BadDudes)." << std::endl;
    std::cout << "Write how many workers data you want to have: ";
    const int SIZE = 3;
    Person * personData[SIZE];
    setOfPersonsData(personData, SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << "Data of " << i+1 << " person." << std::endl;
        personData[i]->show();
        std::cout << std::endl;
        delete personData[i];
    }

    return 0;
}

void setOfPersonsData(Person ** persons, int howManyPersons)
{
    for(int i = 0; i < howManyPersons; i++)
    {
        std::cout << std::endl << i << std::endl;
        char chooseOfPerson = 'N';
        do
        {
            std::cout << "Choose \"B for BadDude, \"G for Gunslinger and P for PokerPlayer: " << std::endl;
            (std::cin >> chooseOfPerson).ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            
        }
        while (chooseOfPerson != 'B' && chooseOfPerson != 'G' && chooseOfPerson != 'P');
        std::cout << "Write data of " << i+1 << " person." << std::endl;
        if(chooseOfPerson == 'B')
            persons[i] = new BadDude;
        else if(chooseOfPerson == 'G')
            persons[i] = new Gunslinger;
        else
            persons[i] = new PokerPlayer;
        persons[i]->set();
        std::cout << std::endl;
    }
}

