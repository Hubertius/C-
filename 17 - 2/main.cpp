#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char * argv[])
{
    std::cout << "Name of program: " << argv[0] << std::endl;

    std::ofstream fileOut(argv[1], std::ios_base::out);
    if(!fileOut.is_open())
    {
        std::cerr << "File couldn\'t be opened!" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "Data from keyboard:" << std::endl;
    int ch;
    while((ch = std::cin.get()) != EOF)
        fileOut << static_cast<char>(ch);
    fileOut.close();

    std::ifstream fileIn(argv[1], std::ios_base::in);
    if(!fileIn.is_open())
    {
        std::cerr << "File couldn\'t be opened!" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "\nContents from file:" << std::endl;
    char charOut;
    while(fileIn.get(charOut))
        std::cout << charOut;
    std::cout << std::endl;

    return 0;
}