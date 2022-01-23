#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <set>
#include <string.h>

int main()
{
    std::set<std::string> friendsOfBolek;
    std::ifstream fileInBolek("bolek.txt", std::ios_base::in);
    if(!fileInBolek.is_open())
    {
        std::cerr << "File containing Bolek friends couldn\'t been opened." << std::endl;
        return 1;
    }
    std::string lineFromFile;
    while(std::getline(fileInBolek, lineFromFile))
        friendsOfBolek.insert(lineFromFile);
    fileInBolek.close();
    std::cout << "Bolek friends:" << std::endl;
    std::for_each(friendsOfBolek.begin(), friendsOfBolek.end(), [](std::string element) { std::cout << element << std::endl; });
    std::cout << std::endl;

    std::set<std::string> friendsOfLolek;
    std::ifstream fileInLolek("lolek.txt", std::ios_base::in);
    if(!fileInLolek.is_open())
    {
        std::cerr << "File containing Lolek friends couldn\'t been opened." << std::endl;
        return 1;
    }
    while(std::getline(fileInLolek, lineFromFile))
        friendsOfLolek.insert(lineFromFile);
    fileInLolek.close();
    std::cout << "Lolek friends:" << std::endl;
    std::for_each(friendsOfLolek.begin(), friendsOfLolek.end(), [](std::string element) { std::cout << element << std::endl; });
    std::cout << std::endl;
    std::set<std::string> lolekAndBolekFriends;
    std::set_union(friendsOfBolek.begin(), friendsOfBolek.end(), friendsOfLolek.begin(), friendsOfLolek.end(), std::insert_iterator<std::set<std::string>>(lolekAndBolekFriends, lolekAndBolekFriends.begin()));
    //std::for_each(lolekAndBolekFriends.begin(), lolekAndBolekFriends.end(), [](std::string element) { std::cout << element << std::endl; });
    std::fstream fileOut("bollol.dat", std::ios_base::out | std::ios_base::binary);
    if(!fileOut.is_open())
    {
        std::cerr << "File \"bollol.dat\" couldn\'t be created/opened!";
        return 1;
    }
    for(auto element: lolekAndBolekFriends)
        fileOut.write(element.c_str(), sizeof(strlen(element.c_str())));
    fileOut.close();
    fileOut.open("bollol.dat", std::ios_base::in | std::ios_base::binary);
    std::cout << "Bolek and Lolek friends:" << std::endl;
    while(fileOut.read((char *) lineFromFile.c_str(),  sizeof(strlen(lineFromFile.c_str()))))
        std::cout << lineFromFile << std::endl;
    fileOut.close();


    return 0;
}