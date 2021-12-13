#include "cd.h"
#include <string.h>

Cd::Cd(char * s1, char * s2, int n, double x)
{
    this->performers = new char[strlen(s1)+1];
    strcpy(this->performers, s1);
    this->label = new char[strlen(s2)+1];
    strcpy(this->label, s2);
    this->selections = n;
    this->playtime = x;
}

Cd::Cd(const Cd & d)
{
    this->performers = new char[strlen(d.performers)+1];
    strcpy(this->performers, d.performers);
    this->label = new char[strlen(d.label)+1];
    strcpy(this->label, d.label);
    this->selections = d.selections;
    this->playtime = d.playtime;
}

Cd::Cd()
{
    const char * defaultPerformers = "Alicia Clark, Morgan Johns";
    const char * defaultLabel = "Sun over the horizon";
    this->performers = new char[strlen(defaultPerformers)+1];
    strcpy(this->performers, defaultPerformers);
    this->label = new char[strlen(defaultLabel)+1];
    strcpy(this->label, defaultLabel);
    this->selections = 5;
    this->playtime = 17.5;
}

void Cd::report() const
{
    std::cout << "Performers: " << this->performers << std::endl;
    std::cout << "Label: " << this-> label << std::endl;
    std::cout << "Number of songs: " << this->selections << std::endl;
    std::cout << "Playtime: " << this->playtime << std::endl;
    std::cout << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
        return *this;
    delete [] this->performers;
    this->performers = new char[strlen(d.performers)+1];
    strcpy(this->performers, d.performers);
    delete [] this->label;
    this->label = new char[strlen(label)+1];
    this->selections = d.selections;
    this->playtime = d.playtime;
    return *this;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

Classic::Classic(char * s1, char * s2, char * nameOfSong, int n, double x) 
    : Cd(s1, s2, n, x)
{
    this->mainSongName = new char[strlen(nameOfSong)+1];
    strcpy(this->mainSongName, nameOfSong);
}

Classic::Classic(char * nameOfSong)
{
    this->mainSongName = new char[strlen(nameOfSong)+1];
    strcpy(this->mainSongName, nameOfSong);
}

Classic & Classic::operator=(const Classic & anotherClassic)
{
    if(this == &anotherClassic)
        return *this;
    Cd::operator=(anotherClassic);
    delete [] this->mainSongName;
    this->mainSongName = new char[strlen(anotherClassic.mainSongName)+1];
    strcpy(this->mainSongName, anotherClassic.mainSongName);
    return *this;
}

Classic::~Classic()
{
    delete [] this->mainSongName;
}

void Classic::report() const
{
    Cd::report();
    std::cout << "Main song name: " << this->mainSongName << std::endl;
}

