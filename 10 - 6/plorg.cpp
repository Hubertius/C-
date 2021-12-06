#include <iostream>
#include <string.h>
#include "plorg.h"

Plorg::Plorg(char * fullname, int repletion)
{
    strcpy(this->fullname, fullname);
    this->repletion = repletion;
}

void Plorg::show() const
{
    std::cout << "My name is: " << this->fullname << std::endl;
    std::cout << "My repletion is at the stage of: " << this->repletion << "%" << std::endl;
}