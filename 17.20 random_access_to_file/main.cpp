#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <cstdlib>

const int LIM = 20;

struct planet
{
    char name[LIM];
    double population;
    double gravity;
};

const char * fileName = "planety.dat";

int main()
{
    std::fstream file(fileName, std::ios_base::out | std::ios_base::trunc | std::ios_base::binary);
    if(!file.is_open())
    {
        std::cerr << "File couldn't be open!" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    planet planetInput;

    std::cout << "Write name of the planetInput (ENTER is ending input): ";
    std::cin.get(planetInput.name, LIM);
    while(planetInput.name[0] != '\0')
    {
        std::cout << "Write population of the planetInput: ";
        std::cin >> planetInput.population;
        std::cout << "Write gravity of the planetInput: ";
        std::cin >> planetInput.gravity;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        file.write(reinterpret_cast<char *>(&planetInput), sizeof(planetInput));
        std::cout << "Write name of the planetInput (ENTER is ending input): ";
        std::cin.get(planetInput.name, LIM);
    }
    file.clear();
    file.close();
    file.open(fileName, std::ios_base::in | std::ios_base::out | std::ios_base::binary);
    int count = 0;
    if(file.is_open())
    {
            std::cout << std::fixed;
            std::cout << "Actual content of the file:" << std::endl;
            while(file.read(reinterpret_cast<char *>(&planetInput), sizeof(planetInput)))
            {
                std::cout << ++count << ": " << std::setw(LIM) << planetInput.name
                          << std::setprecision(0) << std::setw(12) << planetInput.population
                          << std::setprecision(2) << std::setw(6) << planetInput.gravity << std::endl;
            }
            if(file.eof())
                file.clear();
            else
            {
                std::cerr << "No EOF at the end of the file. Something is very, VERY wrong... ." << std::endl;
                exit(EXIT_FAILURE);
            }
    }
    else
    {
            std::cerr << "Error when trying to read from file " << fileName << std::endl;
            exit(EXIT_FAILURE);
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Write number of planetInput you want to change: ";
    long rec;
    std::cin >> rec;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    if(rec < 1 || rec > count)
    {
        std::cerr << "Incorrect number of record (too low or too high)";
        exit(EXIT_FAILURE);
    }
    std::streampos place = (rec-1) * sizeof(planet);
    file.seekg(place);
    if(file.fail())
    {
        std::cerr << "Error when searching for position." << std::endl;
        exit(EXIT_FAILURE);
    }
    file.read(reinterpret_cast<char *>(&planetInput), sizeof(planet));
    std::cout << "Your choice of planet:" << std::endl;
    std::cout << rec << ": " << std::setw(LIM) << planetInput.name
                << std::setprecision(0) << std::setw(12) << planetInput.population
                << std::setprecision(2) << std::setw(6) << planetInput.gravity << std::endl;
    if(file.eof())
        file.clear();
    
    std::cout << "Write name of the planetInput: ";
    std::cin.get(planetInput.name, LIM);
    std::cout << "Write population of the planetInput: ";
    std::cin >> planetInput.population;
    std::cout << "Write gravity of the planetInput: ";
    std::cin >> planetInput.gravity;
    file.seekp(place);
    file.write(reinterpret_cast<char *>(&planetInput), sizeof(planetInput)) << std::flush;
    if(file.fail())
    {
        std::cerr << "Error when tryig to add planet to file.";
        exit(EXIT_FAILURE);
    }

    count = 0;
    file.seekg(0);
    std::cout << "Actual content of the file:" << std::endl;
    while(file.read(reinterpret_cast<char *>(&planetInput), sizeof(planetInput)))
    {
        std::cout << ++count << ": " << std::setw(LIM) << planetInput.name
                    << std::setprecision(0) << std::setw(12) << planetInput.population
                    << std::setprecision(2) << std::setw(6) << planetInput.gravity << std::endl;
    }
    file.close();
    std::cout << "THE END." << std::endl;
    return 0;
}