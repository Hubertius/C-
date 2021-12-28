#include "gunslinger.h"
#include <limits>

Gunslinger::Gunslinger(int m_gushesOnRevolver, double m_timeOfDrawing, std::string name, std::string surname) : Person(name, surname)
{
    if(m_gushesOnRevolver < 0)
        this->gushesOnRevolver = 0;
    else
        this->gushesOnRevolver = m_gushesOnRevolver;
    if(m_timeOfDrawing < 0)
        this->timeOfDrawing = 0;
    else
        this->timeOfDrawing = m_timeOfDrawing;
}

void Gunslinger::set()
{
    Person::set();

    std::cout << "Write number of gushes on the revolver: ";
    int temp;
    while(!(std::cin >> temp))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Try again writing number of gusher on the revolver: ";
    }
    while(std::cin.get() != '\n');
    this->gushesOnRevolver = temp;

    std::cout << "Write time of drawing the revolver by gunslinger: ";
    while(!(std::cin >> temp))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Try again writing time of drawing the revolver: ";
    }
    while(std::cin.get() != '\n');
    this->timeOfDrawing = temp;
}

void Gunslinger::show() const
{
    Person::show();
    std::cout << "Gushes on revolver: " << this->gushesOnRevolver << ".\nTime of drawing it by gunslinger: " << this->timeOfDrawing << std::endl;
}