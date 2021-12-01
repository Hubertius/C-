#include <iostream>
#include "stack.h"
int main()
{
    Stack stack;
    Item items[3] = {
        {"Monnari", 20.5},
        {"Alfieri", 31.2},
        {"Rocco", 28.4}
    };
    for(int i = 0; i < 3; i++)
    {
        stack.push(items[i]);
        Item item;
        stack.pop(item);
        std::cout << "Name of the shop from the \"stack\": " << item.fullname << std::endl;
        std::cout << "Payment from the shop: " << item.payment << std::endl;
    }
    std::cout << "The stack is empty!" << std::endl;
    return 0;
}