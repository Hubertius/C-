#include "person.h"

void Person::show() const
{
    std::cout << "Name: " << this->name << ". Surname: " << this->surname << std::endl;
}

void Person::set() 
{
    std::cout << "Write name of person: ";
    std::getline(std::cin, this->name);
    std::cout << "Write surname of person: ";
    std::getline(std::cin, this->surname);
}

Person::~Person() {}