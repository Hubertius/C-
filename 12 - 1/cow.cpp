#include <iostream>
#include <string.h>
#include "cow.h"

Cow::Cow()
{
    strcpy(name, "No cow");
    this->hobby = nullptr;
    this->weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(this->name, nm);
    this->hobby = new char[strlen(ho)+1];
    strcpy(this->hobby, ho);
    this->weight = wt;
}

Cow::Cow(const Cow & cow)
{
    strcpy(this->name, cow.name);
    this->hobby = new char[strlen(cow.hobby)+1];
    strcpy(this->hobby, cow.hobby);
    this->weight = cow.weight;
}


Cow & Cow::operator=(const Cow & cow)
{
    if(this == &cow) 
        return *this;
    strcpy(this->name, cow.name);
    delete [] this->hobby;
    this->hobby = new char[strlen(cow.hobby)+1];
    strcpy(this->hobby, cow.name);
    this->weight = cow.weight;
    return *this;
}

Cow::~Cow()
{
    delete [] this->hobby;
}

void Cow::showCow() const
{
    std::cout << "Cow name: " << this->name << std::endl;
    if(this->hobby == nullptr)
        std::cout << "Cow hobby: No hobby" << std::endl;
    else
        std::cout << "Cow hobby: " << this->hobby << std::endl;
    std::cout << "Cow weight: " << this->weight << std::endl;
}