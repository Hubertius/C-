#include <iostream>
#include <algorithm>
#include <string>
int main()
{
    
    std::cout << "Write your input: ";
    std::string input;
    std::getline(std::cin, input);
    std::string palindrom(input.rbegin(), input.rend());
    std::cout << "It\'s palindrom: " << palindrom << std::endl;
    if(equal(input.begin(), input.end(), palindrom.begin()))
        std::cout << "It\'s palindrom. " << std::endl;
    else
        std::cout << "It\'s NOT a palindrom" << std::endl;
    return 0;
}