#ifndef STACK_H_
#define STACK_H_

struct customer 
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
    private:
        static const int MAX = 12;
        Item items[MAX];
        int top;
        double sumOfPayments;
    public:
        Stack();
        bool isEmpty() const;
        bool isFull() const;
        bool push(const Item & item);
        bool pop(Item & item);
        ~Stack();
};

#endif STACK_H_