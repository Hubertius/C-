#include <iostream>
#include <string>
#include <fstream>
#include <vector>

std::istream & operator<<(std::istream & is, std::string outputFromFile);

int main()
{   
    std::ifstream fileInp;
    fileInp.open("./text");
    if(!fileInp.is_open())
        std::cout << "File couldn\'t be open!" << std::endl;
    std::string temp;
    std::vector<std::string> fileData;
    while(fileInp.good())
    {
        fileInp >> temp;
        std::cout << temp << " ";
        fileData.push_back(temp);

    }
    std::cout << "\nNumber of words in file: " << fileData.size() << std::endl;

    fileInp.close();
    return 0;
}


std::istream & operator<<(std::istream & is, std::string outputFromFile)
{
    is >> outputFromFile;
    return is;
}