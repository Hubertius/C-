#include <iostream>

int main()
{
    char ch;
    int count = 0;
    while(((ch = std::cin.peek()) != '\n') && ch != '$')
    {
        std::cin.get();
        ++count;
    }
    std::cout << "Number of signs in buffer (up to NEWLINE or $): " << count << std::endl;
    return 0;

}