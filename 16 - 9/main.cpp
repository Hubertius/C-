#include <iostream>
#include <time.h>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::vector<int> vi0(100000);
    srand(time(nullptr));
    for(int i = 0; i < 100000; i++)
        vi0[i] = rand() % 100 + 1;
    std::vector<int> vi(vi0);

    clock_t timeStart = clock();
    std::list<int> li(vi0.begin(), vi0.end());
    clock_t timeEnd = clock();
    std::cout << "Time of copying elements from unarranged vecor vi0 to list li: " 
    << static_cast<double>(timeEnd-timeStart) / CLOCKS_PER_SEC << std::endl;

    timeStart = clock();
    std::sort(vi.begin(), vi.end());
    timeEnd = clock();
    std::cout << "Time of sort operation doing for \"vector\": " 
    << static_cast<double>(timeEnd-timeStart) / CLOCKS_PER_SEC << std::endl;

    timeStart = clock();
    li.sort();
    timeEnd = clock();
    std::cout << "Time of sort operation doing for \"list\": " 
    << static_cast<double>(timeEnd-timeStart) / CLOCKS_PER_SEC << std::endl;

    li.assign(vi0.begin(),vi0.end());

    timeStart = clock();
    li.assign(vi.begin(),vi.end());
    timeEnd = clock();

    std::cout << "Time of copying elements from arranged vecor vi to list li: " 
    << static_cast<double>(timeEnd-timeStart) / CLOCKS_PER_SEC << std::endl;
    
    return 0;
}