#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
int main()
{
    
    std::cout << "Write your input: ";
    std::string input;
    std::getline(std::cin, input);
    std::transform(input.begin(), input.end(), input.begin(), [] (unsigned char c) {return tolower(static_cast<int>(c));});
    std::string palindrom(input.rbegin(), input.rend());
    if(equal(input.begin(), input.end(), palindrom.begin()))
        std::cout << "It\'s palindrom. " << std::endl;
    else
        std::cout << "It\'s NOT a palindrom" << std::endl;
    return 0;
}