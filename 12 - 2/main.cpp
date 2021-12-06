#include <iostream>
#include "myString.h"


int main()
{
    String firstString = String("Aloha"); // konstrukor z jendym parametrem const char * wywoływany jawnie
    String secondString = firstString; // konstruktor kopiujący z parametrem const String & wywołany niejawnie
    String thirdString;
    std::cout << "First String object (called by constructor with one parameter const char *): " << firstString << std::endl;
    std::cout << "Second String object (called by copy constructor): " << secondString << std::endl;
    std::cout << "Third String (called by default constructor): " << thirdString << std::endl;
    String fourthString = String("Hello There!");
    thirdString = fourthString;
    std::cout << "Fourth String (called by constructor with one parameter const char *): " << fourthString << std::endl;
    std::cout << "Third String (assignment operator with value from fourth String object): " << fourthString << std::endl;
    thirdString = "Nie Aloha!";
    std::cout << "Third String (assignment operator called with const char * value): " << fourthString << std::endl;
    std::cout << "First String (" << firstString << ") == Second  (" << secondString << ") :" << (firstString == secondString) << std::endl;
    std::cout << "First String (" << firstString << ") > Second  (" << secondString << ") :" << (firstString > secondString) << std::endl;
    std::cout << "First String (" << firstString << ") < Second  (" << secondString << ") :" << (firstString < secondString) << std::endl;
    std::cin >> firstString;
    std::cout << "First String object: " << firstString << std::endl;
    std::cout << "Length of first object: " << firstString.length();
    std::cout << "Add two strings: (First String + Second String) = " << firstString + secondString << std::endl;
    firstString += secondString;
    std::cout << "Add SecondString to First: (First String += SecondString) = " << firstString << std::endl;
    firstString.stringLow();
    std::cout << "FirstString after lowering: " <<  firstString << std::endl;
}