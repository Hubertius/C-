#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);

int main()
{
    long array[] = {1,2,2,3,5,7,9,3};
    int newSizeOfArr = reduce(array, sizeof(array) / sizeof(long));
    std::cout << "Actual number of elements of array after sort operations: " << newSizeOfArr << std::endl;
    for(int i = 0; i < newSizeOfArr; i++)
        std::cout << array[i] << " ";
    return 0;
}

int reduce(long ar[], int n)
{
    std::sort(ar, ar+n);
    long * ptrToEnd = std::unique(ar, ar+n);
    int count = 0;
    std::for_each(ar, ptrToEnd, [&count](long element) { count++; });
    return count;
}