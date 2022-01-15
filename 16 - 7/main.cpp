#include <iostream>
#include <algorithm>
#include <time.h>
#include <vector>

std::vector<int> lotto(int numberOfFields, int numberOfRandomNumbers);

int main()
{
    std::vector<int> lottoValues = lotto(51, 6);
    for(auto element: lottoValues)
        std::cout << element << " ";
    std::cout << std::endl;
    
}

std::vector<int> lotto(int numberOfFields, int numberOfRandomNumbers)
{
    std::vector<int> container(numberOfFields);
    for(int i = 0; i < numberOfFields; i++)
        container[i] = i;
    srand(time(nullptr));
    for(int i = 0; i < 6; i++)
        container[i] = (rand() % 49) + 1;
    std::random_shuffle(container.begin(), container.end());
    return container;
}