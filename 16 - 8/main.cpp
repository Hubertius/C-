#include <iostream>
#include <cctype>
#include <iterator>
#include <algorithm>
#include <limits>
#include <string>
#include <set>



int main()
{
    std::set<std::string> friendsOfBolek;
    std::cout << "Add friends of Bolek.\n" << std::endl;
    std::cout << "To end listing friends write: q\\Q" << std::endl;
    char decision = 't';
    int count = 1;
    std::string temp;
    while(decision != 'q')
    {
        std::cout << "Write " << count << " friend: ";
        getline(std::cin, temp);
        friendsOfBolek.insert(temp);
        std::cout << "Do you want to end the listing of Bolek friends? ";
        std::cin.get(decision);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
        decision = static_cast<char>(tolower(decision));
        count++;
    }

    std::cout << std::endl;

    std::set<std::string> friendsOfLolek;
    std::cout << "Add friends of Lolek.\n" << std::endl;
    std::cout << "To end writing write: q\\Q" << std::endl;
    decision = 't';
    count = 1;
    while(decision != 'q')
    {
        std::cout << "Write " << count << " friend: ";
        getline(std::cin, temp);
        friendsOfLolek.insert(temp);
        std::cout << "Do you want to end listing of Lolek friends? ";
        std::cin.get(decision);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
        decision = static_cast<char>(tolower(decision));
        count++;
    }

    std::set<std::string> commonFriends;
    std::set_union(friendsOfBolek.begin(), friendsOfBolek.end(), friendsOfLolek.begin(), friendsOfLolek.end(), 
                   std::insert_iterator<std::set<std::string>>(commonFriends, commonFriends.begin()));
    std::ostream_iterator<std::string, char> out(std::cout, " ");
    std::copy(commonFriends.begin(), commonFriends.end(), out);
    std::cout << std::endl;
    return 0;
}