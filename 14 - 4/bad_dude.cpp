#include "bad_dude.h"

BadDude::BadDude(int gushesOnRev, double timeOfDraw, std::string name, std::string surname) 
    : Person(name, surname), Gunslinger(gushesOnRev, timeOfDraw, name, surname), PokerPlayer(name, surname)
{

}

void BadDude::show() const
{
    Gunslinger::show();
    std::cout << "Time of drawing his revolver: " <<  this->getDrawTimeOfRev() << std::endl;
    std::cout << "Card of the player: " << this->getCardOfPlayer() << std::endl;
}

void BadDude::set()
{
    Gunslinger::set();
}

