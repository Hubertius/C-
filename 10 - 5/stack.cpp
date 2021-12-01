#include <iostream>
#include "stack.h"

Stack::Stack()
{
    this->top = 0;
    this->sumOfPayments = 0;
}

bool Stack::isEmpty() const
{
    if(this->top == 0)
        return true;
    return false;
}

bool Stack::isFull() const
{
    if(this->top == MAX)
        return true;
    return false;
}

bool Stack::push(const Item & item)
{
    if(this->isFull())
        return false;
    items[top++] = item;
    return true;
}

bool Stack::pop(Item & item)
{
    if(this->isEmpty())
        return false;
    item = items[--top];
    this->sumOfPayments += item.payment;
    return true;
}

Stack::~Stack()
{
    std::cout << "Sum of entire payments made it by customers until the shop was closed: " << this->sumOfPayments;
}