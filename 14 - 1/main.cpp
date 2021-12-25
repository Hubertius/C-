#include "pair.h"
#include "wine.h"

int main()
{
    int years[] = {1992, 1993, 1994};
    int bottles[] = {25, 18, 36};
    Wine deCremont("deCremont", sizeof(years)/sizeof(years[0]), years, bottles);
    std::cout << "Name of wine: " << deCremont.getLabel() << std::endl;
    for(int i = 0; i < sizeof(years) / sizeof(int); i++)
    {
        std::cout << "Year of wine: " << deCremont.getYears()[i] << ", number of bottles for that year: " << deCremont.getBottForYear()[i] << std::endl;
    }

    std::cout << "" << std::endl;

    Wine tastOfPoland;
    std::cout << "Name of wine: " << tastOfPoland.getLabel() << std::endl;
    std::cout << "Year of wine: " << tastOfPoland.getYears()[0] << ", number of bottles for that year: " << tastOfPoland.getBottForYear()[0] << std::endl;
    return 0;
}