#include <iostream>
#include <algorithm>

template<typename T>
int reduce(T ar[], int n);

int main()
{
    long longArray[] = {1,2,2,3,5,7,9,3};
    int newSizeOfArr = reduce(longArray, sizeof(longArray) / sizeof(long));
    std::cout << "Actual number of elements of array after sort operations: " << newSizeOfArr << std::endl;
    for(int i = 0; i < newSizeOfArr; i++)
        std::cout << longArray[i] << " ";
    std::cout << std::endl;
    std::string  stringArray[] =
    {
        "Jacobs Smith",
        "Anna Smith",
        "Adam Connor",
        "Baron James"
    };
    newSizeOfArr = reduce(stringArray, sizeof(stringArray) / sizeof(std::string));
    std::cout << "Actual number of elements of array after sort operations: " << newSizeOfArr << std::endl;
    for(int i = 0; i < newSizeOfArr; i++)
        std::cout << stringArray[i] << "  ";
    return 0;
}

template<typename T>
int reduce(T ar[], int n)
{
    std::sort(ar, ar+n);
    T * ptrToEnd = std::unique(ar, ar+n);
    int count = 0;
    std::for_each(ar, ptrToEnd, [&count](T element) { count++; });
    return count;
}