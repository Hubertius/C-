#include "cd.h"
#include <string.h>

Cd::Cd(char * s1, char * s2, int n, double x)
{
    strcpy(this->performers, s1);
    strcpy(this->label, s2);
    this->selections = n;
    this->playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(this->performers, d.performers);
    strcpy(this->label, d.label);
    this->selections = d.selections;
    this->playtime = d.playtime;
}

Cd::Cd()
{
    strcpy(this->performers, "Alicia Clark, Morgan Johns");
    strcpy(this->label, "Sun over the horizon");
    this->selections = 5;
    this->playtime = 17.5;
}

void Cd::report() const
{
    std::cout << "Performers: " << this->performers << std::endl;
    std::cout << "Label: " << this-> label << std::endl;
    std::cout << "Number of songs: " << this->selections << std::endl;
    std::cout << "Playtime: " << this->playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
        return *this;
    strcpy(this->performers, d.performers);
    strcpy(this->label, d.label);
    this->selections = d.selections;
    this->playtime = d.playtime;
    return *this;
}


Classic::Classic(char * s1, char * s2, char * nameOfSong, int n, double x) 
    : Cd(s1, s2, n, x)
{
    strcpy(this->mainSongName, nameOfSong);
}

Classic::Classic(char * nameOfSong)
{
    strcpy(this->mainSongName, nameOfSong);
}

Classic & Classic::operator=(const Classic & anotherClassic)
{
    if(this == &anotherClassic)
        return *this;
    Cd::operator=(anotherClassic);
    strcpy(this->mainSongName, anotherClassic.mainSongName);
    return *this;
}

void Classic::report() const
{
    Cd::report();
    std::cout << "Main song name: " << this->mainSongName << std::endl;;
}

