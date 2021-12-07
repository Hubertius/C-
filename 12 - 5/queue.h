#ifndef QUEUE_H_
#define QUEUE_H_
#include "customer.h"
typedef Customer Item;

class Queue
{
    private:
        struct Node
        {
            Item item;
            struct Node * next;
        };
        enum {Q_SIZE = 10};
        Node * front; // Node pointer to front of queue
        Node * rear; // Node pointer to rear of queue
        int numberOfItems; // current number of items (customers) in queue
        const int q_size; // size of the queue at the start of it's "working"
    public:
        Queue(int sizeOfQueue = Q_SIZE);
        Queue(const Queue & q) = delete; // "removed" copy constructor
        Queue & operator=(const Queue & q) = delete; // "removed" assignment operator 
        bool isEmpty() const;
        bool isFull() const;
        int queueCount() const;
        bool addNodeToQueue(const Item & item);
        bool removeNodeToQueue(Item & item);
        ~Queue();
};

#endif QUEUE_H_