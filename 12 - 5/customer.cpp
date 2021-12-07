#include <iostream>
#include <cstdlib>
#include "customer.h"

void Customer::set(long when)
{
    this->processTime = rand() % 3 + 1;
    this->arrive = when;
}