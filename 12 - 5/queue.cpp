#include <iostream>
#include "queue.h"


Queue::Queue(int sizeOfQueue) : q_size(sizeOfQueue)
{
    this->front = this->rear = nullptr;
    this->numberOfItems = 0;
}

bool Queue::isEmpty() const
{
    if(this->front == nullptr)
        return true;
    return false;
}

bool Queue::isFull() const
{
    if(this->numberOfItems == this->q_size)
        return true;
    return false;
}

int Queue::queueCount() const
{
    return this->numberOfItems;
}

bool Queue::addNodeToQueue(const Item & item)
{
    if(this->isFull())
        return false;
    Node * add = new Node;
    add->item = item;
    add->next = nullptr;
    if(this->front == nullptr)
        this->front = add;
    else
        this->rear->next = add;
    this->rear = add;
    return true;

}

bool Queue::removeNodeToQueue(Item & item)
{
    if(this->isEmpty())
        return false;
    item = this->front->item;
    this->numberOfItems--;
    Node * temp = this->front;
    this->front = front->next;
    delete temp;
    if(this->isEmpty())
        this->rear = nullptr;
    return true;


}

Queue::~Queue()
{
    Node * temp;
    while(this->front != nullptr)
    {
        Node * temp = this->front;
        this->front = (this->front)->next;
        delete temp;
    }
}